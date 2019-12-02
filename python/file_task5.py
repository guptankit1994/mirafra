with open("manifest.xml","rt") as fp:
	with open("./project&revfest.xml", "w+") as fp_w:
		line = fp.readline()
		for line in fp:
			if 'project' in line:
				st = str(line)
				fp_w.write("project="+((st.partition('name="')[2]).split('"')[0]))
			if 'revision' in line:
				s = str(line)
				fp_w.write("	Revision Id= "+((s.partition('revision="')[2]).split('"')[0])+"\n")
