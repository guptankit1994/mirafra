with open("manifest.xml","rt") as fp:
	with open("./projectfest.xml", "w+") as fp_w:
		with open("./idfest.xml", "w+") as fp_w1:
			line = fp.readline()
			for line in fp:
				if 'project' in line:
					st = str(line)
					fp_w.write("project="+((st.partition('name="')[2]).split('"')[0])+"\n")
				if 'revision' in line:
					s = str(line)
					fp_w1.write("Revision Id= "+((s.partition('revision="')[2]).split('"')[0])+"\n")
