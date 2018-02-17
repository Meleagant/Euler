 

let sqrt_int n = 
	int_of_float (sqrt (float_of_int n))




let isPrime n = 
if n <= 10 then
	n = 2 || n= 3 || n= 5 || n = 7 
else if n mod 2 = 0 then	
	false
else
	let i = ref 3 
	and res = ref true 
	and borne = sqrt_int n + 3
	in begin
		while !res && !i < borne do
			if n mod !i = 0 then
				res := false
			else
				i := !i + 2
		done;
		!res;
	end


let () = 
let res = ref 0 
in begin
	for i = 0 to 2000000  do 
		if isPrime i then
			res := !res +i
	done;
	Printf.fprintf stdout "Le résultat est : %d \n" !res;
end
