# gdb

## configuration

GDB looks for a local configuration file under `~/.gdbinit`. Here's a minimal example:

```sh
# Use intel syntax for assembly instead of the default AT&T one:
set disassembly-flavor intel
```

It uses the same syntax as the `set` command inside GDB.<br>
For a full list of settings and explanations run `help set` in GDB.

---

Unfortunately there's no option to remove the wall of text when starting up GDB.<br>
You can create an alias to achieve the same though:

```sh
# .bashrc, .zshrc or similar.
alias gdb="gdb -q"
```

## plugins

### Voltron

* [github.com/snare/voltron](https://github.com/snare/voltron)

### GEF

**GDB Enhanced Features**

* [github.com/hugsy/gef](https://github.com/hugsy/gefv)
* [GEF documentation](http://gef.rtfd.io/)

# sources and further reading

