

s = serial('COM55','BaudRate',115200);
fopen(s)

binblockwrite(s,f1(1))

binblockwrite(s,f1(2))

binblockwrite(s,f1(3))

fclose(s)

