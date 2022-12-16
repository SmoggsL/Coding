program bruh;

uses crt,math;
var n,i,j,temp:integer;
    sum:Longint;
    a:array[1..15] of integer;

function primecheck(x:integer):boolean; // function to check for prime numbers
var i:integer;
begin
        if (x<=1) then exit(false);
        for i:= 2 to trunc(sqrt(x)) do if(x mod i = 0)then  exit(false);
        exit (true);
end;

function gcdab(a,b:integer):integer;// find GCD of a and b
begin
        if(a = 0) then exit(b);
        exit(gcdab(b mod a,a));
end;

function gcdofarr():integer; // find GCD of an array
var i,res:integer;
begin
        res:= a[1];
        for i:= 2 to n do
        begin
                res := gcdab(a[i],res);
                if (res = 1) then exit(1);
        end;
        exit(res);

end;


begin
        //input numbers
        readln(n);
        for i:= 1 to n do read(a[i]);
        //check and output prime numbers
        for i:= 1 to n do
        begin
                if(primecheck(a[i]) = true)then write(a[i], ' ');
        end;
        writeln();

        //output GCD of an array
        writeln(gcdofarr());

        for i:=1 to n do
        begin
                sum := sum + a[i]**i;
        end;
        writeln(sum);

        for i:=1 to n-1 do
        begin
                for j:= i+1 to n do
                begin
                        if a[i] > a[j] then
                        begin
                                temp:= a[i];
                                a[i] := a[j];
                                a[j] := temp;
                        end;
                end;
        end;

        for i:= 1 to n do write(a[i],' ');
        writeln();


        readln;
end.
