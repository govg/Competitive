require "prime"

def chec(m,n)
	g=0
	div=m.prime_division
	siz=div.length()
	if siz == n
		g=1
	end

	
return g
end

def main()
	
	t=gets.to_i
	z=0
	i=0
	
	while i < t
		
		a=gets.to_i
		b=gets.to_i
		k=gets.to_i
		
		while a<=b do
			z=z+chec(a,k)
			a=a+1
		end
		
		puts z
		z=0
		i=i+1
	
	end

return 0
end

main()