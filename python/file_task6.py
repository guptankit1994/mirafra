with open("manifest.xml","rt") as fp:
	line = fp.readline()
	for line in fp:
		if 'path' in line:
			st = str(line)
			print("path="+((st.partition('path="')[2]).split('"')[0]))
