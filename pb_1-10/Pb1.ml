(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem 1                          *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*)

let () =
	let res = ref 0 
	in begin
	for i = 1 to 999 do
		if i mod 3 = 0 || i mod 5 = 0 then
			res := !res +i
	done;
	Printf.fprintf stdout "La réponse est %d \n " !res;
	end
