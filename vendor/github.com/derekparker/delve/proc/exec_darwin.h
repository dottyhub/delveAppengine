#include "proc_darwin.h"

#include <unistd.h>
#include <sys/ptrace.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>

int
fork_exec(char *, char **, int, task_t*, mach_port_t*, mach_port_t*, mach_port_t*);
