# The default keymap for Redox

```
KEYBOARD_JSON=20221109_01_redox_primary.json
qmk json2c -o keyboards/redox/keymaps/nitsujri/keymap.c ~/Dropbox/keyboard/redox/${KEYBOARD_JSON}
```

- Manually modify keymap.c to add `AP_FN`

`qmk compile -kb redox -km nitsujri`
`qmk flash -kb redox -km nitsujri`

Plugin to help modify keys: KeymapCEditor
