with open("manifest.xml","rt") as fp:
	while 1:
		line = fp.readline()
		if "fetch=" in line:	
			#l=line.split('fetch="')[1]
			print(line.split('"')[1])
			break

