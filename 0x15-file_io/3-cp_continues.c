/* open fd for new file and error checks */
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
		argv[2]);
	exit(99);
}

/* reads into buffer from file_from and checks for error */
r = read(file_from, buf, 1024);
if (r == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]);
	exit(98);
}
while (r)
{
	/* write to file_to from buffer and error checks */
	w = write(file_to, buf, r);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]);
		exit(99);
	}

	r = read(file_from, buf, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

}

/* close both file descriptors and error checks */
c = close(file_from);
if (c == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
}

c = close(file_to);
if (c == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	exit(100);
}
