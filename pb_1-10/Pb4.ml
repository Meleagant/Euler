(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem 4                          *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*)

let est_palindrome n =
	let st = string_of_int n 
	and res = ref true 
	in 
		let l = String.length st 
		in begin 
			for i = 0 to l/2 do
				if st.[i] <> st.[l-1-i] then 
					res := false
			done;
			!res;
	end

let () =
	let res = ref 0 
	in begin
		for x = 1 to 999 do
			for y = 1 to 999 do
				let m = x*y in
				if est_palindrome m then
					if m > !res then 
						res := m
			done
		done;
		Printf.fprintf stdout "La réponse est %d \n" !res;
	end
