	subproject = (S_ISGITLINK(mode1) || S_ISGITLINK(mode2));
	if (S_ISGITLINK(pair->one->mode) || S_ISGITLINK(pair->two->mode)) {
		if (S_ISGITLINK(pair->one->mode))
		if (S_ISGITLINK(pair->two->mode))