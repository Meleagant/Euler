(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*                        Problem 6                          *)
(*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*)
(*
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*)


let sum n = 
	n*(n+1)/2

let sum_of_square n = 
	n*(n+1)*(2*n+1)/6

let () = 
	let n = 100 in
	let res = (sum n)*(sum n) - sum_of_square n in
		Printf.fprintf stdout "La réponse est %d \n" res

