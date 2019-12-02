with open("manifest.xml","rt") as fp:
	with open("./newfest.xml", "w+") as fp_w:
		for x in fp:

			if '>' in  x:
				x = x.replace('>','#')	
			if '<' in x:
				x = x.replace('<','$')	
				
	
			fp_w.write(x);
