(*###########################################################################*)
(*                 Pb 10                                                     *)
(*###########################################################################*)

let racine k = 
	int_of_float (sqrt (float_of_int k))

let check a b c = 
	a +b + c = 1000 && a*a + b*b = c*c 

let () = 
let res = ref 0 
in begin
	for c = 1 to 998 do
	let c2  = c*c in
		for b = 1 to c -1 do 
		let b2 = b*b in
			let a = racine (c2 -b2) in
			
			if check a b c then
				res := a*b*c
			else if check (a-1) b c then
				res := (a-1)*b*c
			else if check (a+1) b c then
				res := (a+1)*b*c
		done
	done;
	Printf.fprintf stdout "Le résultat est : %d \n" !res;
end






































