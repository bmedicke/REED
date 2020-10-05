* `(gdb) starti` earliest possible breakpoint
  * `(gdb) break *_start`
    * `(gdb) break *__libc_start_main` (you need to step before this works, `rbreak .` and one `continue` works)
      * `(gdb) break *main`
* `(gdb) break *main`
* `(gdb) run`
* `(gdb) up` move to frame above (as if function has not been called yet)
* `(gdb) rbeak .` set breakpoint for each function call
* man 2 execve, called by the shell when starting your program


# find call to main for stages.c

```sh
gdb a.out
# gdb
rb .
run
c
del br
break *__libc_start_main+241
```

# break at call to main for stages.c

```sh
gdb a.out
# gdb
break *_init
run
break *__libc_start_main+241
disas __libc_start_main
```

# disas dynamically linked stuff

```sh
gdb a.out
start
set logging on
disas *__libc_start_main
set logging off
```
