def max_in():
	with open("manifest.xml","rt") as fp1:
		mx =0
		for i in fp1:
			mx +=1
		return mx

with open("manifest.xml","rt") as fp:
	with open("./replaceslashfest.xml", "w+") as fp_w:
		count = 0
		
		max_1 = max_in() 
		print(max_1)
		for x in fp:
			if '/' in x:
				count += 1
			if '/' in  x and count <=10:
				x = x.replace('/','*')	
			if '/' in x and count > 10 and count <= (max_1 -10) :
				x = x.replace('/','^')	
			if '/' in x and count > (max_1-10)  :
				x = x.replace('/','$')	
				
	
			fp_w.write(x);



