# Radare2

# toc

<!-- vim-markdown-toc GFM -->

* [installation](#installation)
* [the basics](#the-basics)
* [`r2`](#r2)
  * [the grammar of commands](#the-grammar-of-commands)
* [scripting with `r2pipe`](#scripting-with-r2pipe)
* [configuration](#configuration)
* [GUIs](#guis)
* [sources and further reading](#sources-and-further-reading)

<!-- vim-markdown-toc -->

# installation

You are strongly encouraged to always use the absolute latest version of Radare2
(it is a requirement to get any support). <br>
As such, the best way to install it is directly from the [git repo](https://github.com/radareorg/radare2):

```sh
git clone https://github.com/radareorg/radare2.git
radare2/sys/install.sh # also used to update.
```

You might want to compare your version (`r2 -v`) to the latest commit.

# the basics

See [[r2b]](#sources-and-further-reading).

Radare (RawDataRecovery) was started as a forensic hex editor.
Over the years it has evolved into a reverse-engineering and
binary analysis framework. Radare2 is a complete rewrite.

---

It follows the Unix philosophy of minimalist, modular programs.
The provided command line utilities are:

| tool name     | function                                           |
| ---           | ---                                                |
| **`radare2`** | the main tool (CLI/TUI), aliased to `r2`           |
| `pr2pm`       | the r2 package manager                             |
| `rabin2`      | extracts info about a binary (ELF, PE, etc.)       |
| `radiff2`     | binary diffing, a more powerful `cmp`              |
| `rafind2`     | finds byte patterns                                |
| `ragg2`       | compiler that creates tiny binaries for injection  |
| `rahash2`     | block based hashing (great to compare large files) |
| `rarun2`      | run programs in different environments             |
| `rasm2`       | CLI assembler/disassembler (x86, x64, Java, etc.)  |
| `rax2`        | base/radix/ASCII/string converter                  |

Radare2 can open many input/output sources as if they were files. Among others:<br>
disks, files, kernel drivers, network connections, partitions, processes.

# `r2`

`r2` supports different **modes of operation**. You can think of it a
bit like the Vim of reverse engineering tools.

You start in **command mode** (CLI). Execute the `?` command to get help.
From command mode you can switch to **visual mode** (TUI) with
the `V` command. In visual mode you can cycle through various
print modes with the shortcuts `p` (next) and `P` (previous).

| mode               | function                                  |
| ---                | ---                                       |
| command mode       | default mode, all commands available      |
| visual mode: hex   | hex editor view (similar to `xxd`)        |
| visual mode: disas | disassembly view                          |
| visual mode: debug | disassembly view with registers and stack |
| visual mode: word  |                                           |
| visual mode: buf   |                                           |

You will have noticed that in visual mode you use keyboard shortcuts.
Press `??` to get the full list.
You can still execute commands with `:` though, just like in Vim.
You can continue to execute commands or close the prompt with `ctrl-d`
or by sending an empty line.

The shortcut `q` gets you back to command mode.<br>
The command `q` exits Radare2. You can also use `ctrl-d` both times.

---

> r2-command-mode.jpg

<img src="../media/r2-command-mode.jpg"></img>

* *note the following:*
  * in command mode the prompt shows the current position in the file
    * this position is the currently `seek`ed-to line (not the instruction pointer)
    * most commands operate on this address

---

> r2-visual-mode-hex.jpg

<img src="../media/r2-visual-mode-hex.jpg"></img>

* *note the following:*
  * in visual mode you can see the current position in the top line (far left)
    * it is also the top line in the hex-dump
  * the instruction pointer is declared via a comment (`; rip`)

---

To open a file for analysis run `r2 /path/to/bin`. If you plan on modifying it add the
`-w` flag, if you would like to open the file in debug mode (to step through it) add `-d`.

## the grammar of commands

Modes are not the only similarity to Vim.
Just likt it, Radare2 uses the chaining of single characters to create commands.

Each command starts with a **single mnemonic character**.<br>
For instance: every command that is related to some kind of analysis starts with `a`.

You can use the single character as a command directly or append more characters and symbols
to get access to more functionality in the corresponding category. A single `a`, for example,
is aliased to `aai`, which stands for '**a**nalysis **a**ll **i**nfo' which shows info of all analysis paramters.

The full list can be seen with the `?` command, here is a short excerpt:

| first character | mnemonic     | as direct command |
| ---             | ---          | ---               |
| `a`             | **a**nalysis |                   |
| `d`             | **d**ebugger |                   |
| `i`             | **i**nfo     |                   |
| `o`             | **o**pen     |                   |
| `p`             | **p**rint    |                   |
| `s`             | **s**eek     |                   |
| `V`             | **V**isual   |                   |

To learn more about the direct command and sub commands
you can append an `?` to get detailed help.


# scripting with `r2pipe`

# configuration

# GUIs

* web interface: `r2 -c=H --`
* Cutter ([cutter.re](https://cutter.re))
* about 5 that are abandoned by now

# sources and further reading

* [r2b] pancake, maijin, et al. (2020). The Official Radare2 Book. https://book.rada.re/
