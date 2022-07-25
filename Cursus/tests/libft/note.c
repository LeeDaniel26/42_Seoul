nt main() {
    char *str = "12345";
    char **res;

    res = ft_split(str, 0);
    printf("%s\n", res[0]);
    printf("%s\n", res[1]);
    return (0);
}
