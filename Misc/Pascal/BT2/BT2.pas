program BT2;
uses crt;
var n,i,big,small,bigx,smallx:integer;
	a:array[1..100001] of integer;


begin
	readln(n);
	for i:= 1 to n do
	begin
	 	read(a[i]);
	end;
	big := a[1];
	small := a[1];
	bigx:= 1;
	smallx:= 1;
	for i:= 2 to n do 
	begin
		if big < a[i] then
		begin
			big := a[i];
			bigx:= i;
		end;
		if small > a[i] then
		begin
			small := a[i];
			smallx := a[i];
		end;
	end;
	writeln('Largest number and position: ');
	writeln(big,' ', bigx);
	writeln('Smallest number and position: ');
	writeln(small, ' ', smallx);


end.