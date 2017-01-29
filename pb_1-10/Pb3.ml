(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem 1                          *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*)

let () = 
	let res = ref 3
	and n = ref 600851475143 (* Obvious not even *)
	in begin
		while !n <> 1 do
			while !n mod !res = 0 do
				n := !n / !res;
			done;
			res := !res + 2;
		done;
		Printf.fprintf stdout "La réponse est %d \n" (!res -2);
	end
			



