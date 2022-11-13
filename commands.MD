# Команды для обновления программ на компьютере

Обновляем список программ в репозиториии 

```shell
$ sudo aptitude update 

[sudo] password for username: 
Hit https://ppa.launchpadcontent.net/gambas-team/gambas3/ubuntu jammy InRelease
Hit http://ru.archive.ubuntu.com/ubuntu jammy InRelease                   
Hit http://ru.archive.ubuntu.com/ubuntu jammy-updates InRelease                                                                      
Hit http://ru.archive.ubuntu.com/ubuntu jammy-security InRelease                                              
Hit http://ru.archive.ubuntu.com/ubuntu jammy-backports InRelease                                       
Hit https://deb.torproject.org/torproject.org jammy InRelease                     
Hit https://ppa.launchpadcontent.net/graphics-drivers/ppa/ubuntu jammy InRelease
Hit https://ppa.launchpadcontent.net/libreoffice/ppa/ubuntu jammy InRelease
```

Обновляем все программы

```shell
$ sudo aptitude dist-upgrade 

The following packages will be upgraded: 
  libfprint-2-2 tor tor-geoipdb 
3 packages upgraded, 0 newly installed, 0 to remove and 0 not upgraded.
Need to get 3 220 kB of archives. After unpacking 265 kB will be used.
Do you want to continue? [Y/n/?] Y
Get: 1 http://ru.archive.ubuntu.com/ubuntu jammy-updates/main amd64 libfprint-2-2 amd64 1:1.94.3+tod1-0ubuntu2~22.04.02 [288 kB]
Get: 2 https://deb.torproject.org/torproject.org jammy/main amd64 tor-geoipdb all 0.4.7.11-1~jammy+1 [1 197 kB]
Get: 3 https://deb.torproject.org/torproject.org jammy/main amd64 tor amd64 0.4.7.11-1~jammy+1 [1 735 kB]
Fetched 3 220 kB in 2s (1 328 kB/s)
(Reading database ... 219722 files and directories currently installed.)
Preparing to unpack .../libfprint-2-2_1%3a1.94.3+tod1-0ubuntu2~22.04.02_amd64.deb ...
Unpacking libfprint-2-2:amd64 (1:1.94.3+tod1-0ubuntu2~22.04.02) over (1:1.94.3+tod1-0ubuntu2~22.04.01) ...
Preparing to unpack .../tor-geoipdb_0.4.7.11-1~jammy+1_all.deb ...
Unpacking tor-geoipdb (0.4.7.11-1~jammy+1) over (0.4.7.10-1~jammy+1) ...
Preparing to unpack .../tor_0.4.7.11-1~jammy+1_amd64.deb ...
Unpacking tor (0.4.7.11-1~jammy+1) over (0.4.7.10-1~jammy+1) ...
Setting up tor (0.4.7.11-1~jammy+1) ...
Setting up libfprint-2-2:amd64 (1:1.94.3+tod1-0ubuntu2~22.04.02) ...
Setting up tor-geoipdb (0.4.7.11-1~jammy+1) ...
Processing triggers for libc-bin (2.35-0ubuntu3.1) ...
Processing triggers for man-db (2.10.2-1) ...
Processing triggers for udev (249.11-0ubuntu3.6) ...
                                         
Current status: 0 (-3) upgradable.
```


# Общие команды терминала 

Очистить окно терминала 

```shell
$ clear
```

# Работа с каталогами

Посмотрели дерево каталога с глубиной 1 `tree -L 1`
`-L` параметр отвечает за глубину просмотра

```shell
$ tree -L 1
.
├── Desktop
├── Documents
├── Downloads
├── mark
├── Music
├── Pictures
├── Public
├── snap
├── Templates
├── Videos
└── 

12 directories, 0 files
```

Посмотреть таблицу файлов и папок внутри каталога `ls -la`

```shell
$ ls -la
total 288
drwxr-x--- 29 username username  4096 ноя 13 11:09 .
drwxr-xr-x  4 root     root      4096 фев  8  2022 ..
-rw-------  1 username username 79383 ноя 13 11:06 .bash_history
-rw-r--r--  1 username username   220 фев  7  2022 .bash_logout
-rw-r--r--  1 username username  3771 фев  7  2022 .bashrc
drwx------ 31 username username  4096 окт 21 09:24 .cache
drwx------ 35 username username  4096 ноя  7 12:56 .config
drwxr-xr-x  2 username username  4096 ноя 13 11:50 Desktop
drwxr-xr-x 12 username username  4096 ноя  7 07:53 Documents
drwxr-xr-x  6 username username  4096 окт 26 16:19 Downloads

...

```

# Управление переходами по каталогам

Зайти в каталог

```shell
$ cd mark/
```

Проверить в каком мы сейчас каталоге 

```shell
$ pwd
/home/username/mark
```

Выйти в каталог уровнем выше 

```shell
$ cd ..
```

Посмотреть текущий каталог

```shell
$ pwd
```

# Редактирование и просмотр файлов, а так же удаление файлов

Редактировать файл

```shell
$ nano hello.txt
```

Просто просмотреть содержимое файла

```shell
$ cat hello.txt 
Hello!
```

Удалить файл
```shell
$ rm hello.txt
```

Создать папку

```shell
$ mkdir papa
$ mkdir mama

username@pc:~/mark$ pwd
/home/username/mark
username@pc:~/mark$ tree
.
├── mama
│   └── mama.txt
└── papa
    └── papa.txt

2 directories, 2 files
```

Удаление каталога

```shell
$ rm papa/ -rf
```
