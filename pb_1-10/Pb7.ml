(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem 7                          *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
Whet is the 10 001th prime number
*)

let racine n = 
	int_of_float (sqrt (float_of_int n))


let isPrime n = 
if n <= 10 then
	n = 2 || n = 3 || n = 5 || n = 7
else if n mod 2 = 0 then
	false
else
	let res = ref true
	and i = ref 3
	and borne = (racine n) + 3
	in begin
		while !res && !i < borne do
			if n mod !i = 0 then 
				res := false
			else
				i := !i + 2 
		done;
		!res
	end

let () = 
let res = ref 9
and cont = ref 4 
in begin
	while !cont <>  10001 do 
		res := !res +2;
		if isPrime !res then
			incr cont;
	done;
	Printf.fprintf stdout "Le résultat est  : %d \n" (!res);
end









