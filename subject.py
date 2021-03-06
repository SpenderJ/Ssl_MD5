import os
os.system("clear")
os.system("echo '\n\nFirst of all you need an executable named ./ft_ssl, program will try to make re'")
os.system("make re")
os.system("echo ''")

os.system("echo 'Quick tester running tests provided by the ft_ssl_md5 subject\n'")
os.system("clear")

## MD5 TEST OF THE SUBJECT

## TEST 1

os.system("echo 'echo \"pickle rick\" | ./ft_ssl md5'")
os.system("echo \"pickle rick\" | ./ft_ssl md5")
os.system("echo ''")

## TEST 2

os.system("echo 'echo \"Do not pity the dead, Harry.\" | ./ft_ssl md5 -p'")
os.system("echo \"Do not pity the dead, Harry.\" | ./ft_ssl md5 -p")
os.system("echo ''")

## TEST 3

os.system("echo 'echo \"Pity the living.\" | ./ft_ssl md5 -q -r'")
os.system("echo \"Pity the living.\" | ./ft_ssl md5 -q -r")
os.system("echo ''")

## TEST 4

os.system("echo '\"And above all,\" > file'")
os.system("echo \"And above all,\" > file")
os.system("echo 'echo ./ft_ssl md5 file'")
os.system("./ft_ssl md5 file")
os.system("echo ''")

## TEST 5

os.system("echo './ft_ssl md5 -r file'")
os.system("./ft_ssl md5 -r file");
os.system("echo ''")

## TEST 6

os.system("echo './ft_ssl md5 -s \"pity those that aren`t following baerista on spotify. \" '")
os.system("./ft_ssl md5 -s \"pity those that aren't following baerista on spotify.\"")
os.system("echo ''")

## TEST 7

os.system("echo 'echo \"be sure to handle edge cases carefully\" | ./ft_ssl md5 -p file'")
os.system("echo \"be sure to handle edge cases carefully\" | ./ft_ssl md5 -p file")
os.system("echo ''")

## TEST 8

os.system("echo 'echo \"some of this will not make sense at first\" | ./ft_ssl md5 file'")
os.system("echo \"some of this will not make sense at first\" | ./ft_ssl md5 file")
os.system("echo ''")

## TEST 9

os.system("echo 'echo \"but eventually you will understand\" | ./ft_ssl md5 -p -r file'")
os.system("echo \"but eventually you will understand\" | ./ft_ssl md5 -p -r file")
os.system("echo ''")

## TEST 10

os.system("echo 'echo \"GL HF let`s go\" | ./ft_ssl md5 -p -s \"foo\" file'")
os.system("echo \"GL HF let's go\" | ./ft_ssl md5 -p -s \"foo\" file")
os.system("echo ''")

## TEST 11

os.system("echo 'echo \"one more thing\" | ./ft_ssl md5 -r -p -s \"foo\" file -s \"bar\"'")
os.system("echo \"one more thing\" | ./ft_ssl md5 -r -p -s \"foo\" file -s \"bar\"")
os.system("echo ''")

## TEST 12

os.system("echo 'echo \"just to be extra clear\" | ./ft_ssl md5 -r -q -p -s \"foo\" file'")
os.system("echo \"just to be extra clear\" | ./ft_ssl md5 -r -q -p -s \"foo\" file")
os.system("echo ''")

## TEST 13

os.system("echo 'echo \"https://www.youtube.com/watch?v=w-5yAtMtrSM\" > big_smoke_order_remix'")
os.system("echo \"https://www.youtube.com/watch?v=w-5yAtMtrSM\" > big_smoke_order_remix")
os.system("echo './ft_ssl sha256 -q big_smoke_order_remix'")
os.system("./ft_ssl sha256 -q big_smoke_order_remix")
os.system("echo ''")

## TEST 14

os.system("echo './ft_ssl sha256 -s \"wubba lubba dub dub\"'");
os.system("./ft_ssl sha256 -s \"wubba lubba dub dub\"")
os.system("echo ''")

## Removing created files

os.system("rm file")
os.system("rm big_smoke_order_remix")
