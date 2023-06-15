struct h3r;

struct h3r *h3r_new(void);
void h3r_del(struct h3r const *);

int h3r_pack(struct h3r const *, FILE *);
int h3r_unpack(struct h3r *, FILE *);

int h3r_errnum(struct h3r const *);
char const *h3r_errstr(struct h3r const *);

void h3r_print_targets(struct h3r const *, FILE *);
void h3r_print_domains(struct h3r const *, FILE *);

void h3r_print_targets_table(struct h3r const *, FILE *);
void h3r_print_domains_table(struct h3r const *, FILE *);

unsigned h3r_nhits(struct h3r const *);
char const *h3r_hit_name(struct h3r const *, unsigned idx);
char const *h3r_hit_acc(struct h3r const *, unsigned idx);
double h3r_hit_evalue_ln(struct h3r const *, unsigned idx);

char const *h3r_strerror(int rc);

FILE *fopen(char const *filename, char const *mode);
FILE *fdopen(int, char const *);
int fclose(FILE *);
