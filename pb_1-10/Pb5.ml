(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem 5                          *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*)

let pgcd n1 n2 =
	let a = ref n1
	and b = ref n2 
	in begin
		while !b <> 0 do
			let save = !a 
			in begin
				a := !b;
				b := save mod !b;
			end
		done;
		!a;
	end

let ppcm n1 n2 =
	n1*n2 / pgcd n1 n2

let () =
	let res = ref 2 
	in begin 
		for i = 3 to 20 do 
			res :=ppcm !res i
		done;
		Printf.fprintf stdout "La réponse est %d \n" !res;
	end
