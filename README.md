C Practice
==========
Each of the directories in the root of the repository represents a particular topic. Here is the recommended order to tackle them in:

1. variables
2. loops
3. strings

`cd` into a directory to get started, and create a file for your solution with the same name as the task. For example, if you were solving `count` then you would read `count.txt` and write your solution in `count.c`.

To test your solution, use the `check` program supplied.

```
../check count
```

You may optionally specify `-v` against the `check` program to see more information about the tests that are run.

You may also optionally specify `--custom` to supply your own test. The program will then accept input from `stdin`.

```
../check count -v --custom < my_test.txt
```
