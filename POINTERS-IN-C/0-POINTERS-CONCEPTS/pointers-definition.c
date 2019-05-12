main()
{
	int *Width;

	Width = (int *)malloc(sizeof(int));
	*Width = 34;

	printf("  Data stored at *Width is %d\n", *Width);
	printf("       Address of Width is %p\n", &Width);
	printf("Address stored at Width is %p\n", Width);
}
