(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem  2                         *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*)

let () = 
	let res = ref 0 
	and f_n = ref 0
	and f_n_plus_1 = ref 1
	in  begin
		while !f_n_plus_1 < 4000000 do
			if !f_n_plus_1 mod 2 = 0 then
				res := !res + !f_n_plus_1;
			let truc = !f_n in begin
				f_n := !f_n_plus_1;
				f_n_plus_1 := truc + !f_n_plus_1;
			end;
		done;
		Printf.fprintf stdout "La réponse est %d \n" !res;
	end

			



