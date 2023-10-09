# How to use encryption tool:

to encrypt run:

```make encrypt FILE_NAME=<File to encrypt> TYPE=<Replace with any intager, eg 100>```

to decrypt run:

```make decrypt FILE_NAME=<File to decrypt> TYPE=<Replace with any intager, eg 100 (note that this intager needs to be the same as for the encryption in order to decrpyt)>```

to remove created folders:

```make clean```
(note that this only deletes hard coded files, so it will not work for all cases)