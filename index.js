// Ergodox EZ Configurator Modifier-Layer Populator
// Justin Collier <jpcxist@gmail.com>
// Licensed under GPL-3.0-or-later
//
// This script applies the same alphabetical layout to each layer listed in
// the MODIFIER_LAYERS object.
// A modifier chord is applied to all buttons of each layer
// Connections between layers must be applied manually.
//
// Modify the constants AUTHORIZATION, BASE_LAYOUT, and MODIFIER_LAYERS
// to configure the script.

const AUTHORIZATION = 'Bearer ***'; // set bearer here

// Ordered list of keys to apply to all layers
const BASE_LAYOUT = [
  'KC_ESCAPE', 'KC_1',     'KC_2',        'KC_3',        'KC_4', 'KC_5',
  'KC_6',      'KC_TAB',   'KC_Q',        'KC_W',        'KC_E', 'KC_R',
  'KC_T',      null,       'KC_GRAVE',    'KC_A',        'KC_S', 'KC_D',
  'KC_F',      'KC_G',     null,          'KC_Z',        'KC_X', 'KC_C',
  'KC_V',      'KC_B',     null,          null,          null,   null,
  'KC_LEFT',   'KC_RIGHT', null,          null,          null,   'KC_SPACE',
  null,        null,       'KC_7',        'KC_8',        'KC_9', 'KC_0',
  'KC_MINUS',  'KC_EQUAL', 'KC_BSPACE',   null,          'KC_Y', 'KC_U',
  'KC_I',      'KC_O',     'KC_P',        'KC_QUOTE',    'KC_H', 'KC_J',
  'KC_K',      'KC_L',     'KC_LBRACKET', 'KC_RBRACKET', null,   'KC_N',
  'KC_M',      'KC_COMMA', 'KC_DOT',      'KC_SCOLON',   null,   'KC_DOWN',
  'KC_UP',     'KC_SLASH', 'KC_BSLASH',   'KC_DELETE',   null,   null,
  null,        null,       null,          'KC_ENTER'
];

// Maps layer IDs to modifier chord set (to apply to all keys on that layer)
const MODIFIER_LAYERS = {
  'ryPL7' : null, // Base layer, no modifiers
  'NE400' : {alt : false, ctrl : true, gui : false, shift : false},
  'n0mNx' : {alt : true, ctrl : false, gui : false, shift : false},
  'K60op' : {alt : false, ctrl : false, gui : false, shift : true},
  'oO9nQ' : {alt : false, ctrl : false, gui : true, shift : false},
  'LGMLe' : {alt : true, ctrl : false, gui : false, shift : true},
  'MbZMY' : {alt : true, ctrl : true, gui : false, shift : false},
  '0XOZw' : {alt : false, ctrl : true, gui : false, shift : true},
  'OPvna' : {alt : false, ctrl : true, gui : true, shift : false},
  'dbZwZ' : {alt : true, ctrl : false, gui : false, shift : true},
  'ZJq5r' : {alt : true, ctrl : false, gui : true, shift : false},
  'axW4G' : {alt : false, ctrl : false, gui : true, shift : true},
  'YdEYy' : {alt : true, ctrl : true, gui : false, shift : true},
  '5GBmw' : {alt : true, ctrl : true, gui : true, shift : false},
  'eE9lr' : {alt : false, ctrl : true, gui : true, shift : true},
  'mMlAm' : {alt : true, ctrl : true, gui : true, shift : true},
};

const getBaseBodies = (hashId,
                       modifiers =
                           null) => BASE_LAYOUT.reduce((bodies, code, idx) => {
  if (code)
    bodies.push({
      "operationName" : null,
      "variables" : {
        hashId,
        "key" : {
          "about" : null,
          "aboutPosition" : null,
          code,
          "color" : null,
          "customLabel" : null,
          "command" : null,
          "glowColor" : null,
          "layer" : null,
          modifiers,
          "os" : null,
          "staticMacro" : null
        },
        "position" : idx
      },
      "query" :
          "mutation ($hashId: String!, $key: Json!, $position: Int!) {\n  updateKey(hashId: $hashId, keyData: $key, position: $position) {\n    status\n    __typename\n  }\n}\n"
    });
  return bodies;
}, []);

// Returns a Promise of POST requests for all of the base keys on a layout
const applyLayerKeys = (hashId, modifiers = null) => Promise.all(
    getBaseBodies(hashId, modifiers)
        .map(
            body => fetch("https://oryx.ergodox-ez.com/graphql", {
              "credentials" : "omit",
              "headers" : {
                "User-Agent" :
                    "Mozilla/5.0 (X11; Fedora; Linux x86_64; rv:77.0) Gecko/20100101 Firefox/77.0",
                "Accept" : "*/*",
                "Accept-Language" : "en-US,en;q=0.5",
                "content-type" : "application/json",
                "Authorization" : AUTHORIZATION
              },
              "body" : JSON.stringify(body),
              "method" : "POST",
              "mode" : "cors"
            })));

// Create all POST requests for all layers based on the constant objects
Promise
    .all(Object.entries(MODIFIER_LAYERS).map(([ id, mods ]) => {
      if (mods)
        return applyLayerKeys(id, {
          leftAlt : mods.alt,
          leftCtrl : mods.ctrl,
          leftGui : mods.gui,
          leftShift : mods.shift,
          rightAlt : false,
          rightCtrl : false,
          rightGui : false,
          rightShift : false
        });
      else
        return applyLayerKeys(id, null);
    }))
    .then(() => console.log('done!'))
    .catch(console.error);
