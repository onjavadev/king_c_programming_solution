Клонировать репозиторий на локальный компьютер

```shell
$ git clone git@github.com:onjavadev/king_c_programming_solution.git
```

Смотрим статус файлов
```shell
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	commands.MD
	commandsgit.MD

nothing added to commit but untracked files present (use "git add" to track)
```

Добавляем файлы в коммит

```shell
$ git add .
```

Создаем сам коммит

```shell
$ git commit -m "Добавили подсказки по bash и по git"
[main 0861b39] Добавили подсказки по bash и по git
 2 files changed, 177 insertions(+)
 create mode 100644 commands.MD
 create mode 100644 commandsgit.MD
```

Выгружаем коммит в удаленный репозиторий

```shell
$ git push
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 16 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 2.27 KiB | 2.27 MiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
To github.com:onjavadev/king_c_programming_solution.git
   6e3c82f..0861b39  main -> main
```

