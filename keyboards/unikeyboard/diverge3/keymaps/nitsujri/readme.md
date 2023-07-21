# The default keymap for Redox

```
KEYBOARD_JSON=20220104_primary_1.json
qmk json2c -o keyboards/unikeyboard/diverge3/keymaps/nitsujri/keymap.c keyboards/unikeyboard/diverge3/keymaps/nitsujri/${KEYBOARD_JSON}
```

- Manually modify keymap.c to add `AP_FN`

`qmk compile -kb unikeyboard/diverge3 -km nitsujri; qmk flash -kb unikeyboard/diverge3 -km nitsujri`

Plugin to help modify keys: KeymapCEditor
