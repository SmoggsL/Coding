const fi = 'MATMA.inp';
	  fo = 'MATMA.out';

var
	n,size,i: Integer;
	s: AnsiString;
	a: array['A'..'Z'] of integer;
	k : Char;
begin
	assign(input,fi); reset(input);
	assign(output,fo); rewrite(output);
	
	size := 0;
	// k:= 'A';
	while (not(eof(input))) do 
	begin
		readln(input,s);
		for i:= 0 to length(s) do
		begin
			k := s[i];
			if ((k >= 'A') and (k <= 'Z')) then
			begin
				
				a[k] := a[k] +1;
			end;	
		end;
	end;
	for k := 'A' to 'Z' do 
	begin
		if ((a[k] < 9) and (a[k] > 0)) then write(a[k]);
	end;
	

	



	close(input); close(output);
end.