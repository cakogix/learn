#include <mpi.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    MPI_Init(&argc, &argv);

    int rank, size, nint = 100; // Intervals. Consider making this a command-line argument.
    double h, sum, x, sBuf, rBuf;

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    h = 1.0 / (double)nint;
    sum = 0.0;

    for (int i = rank; i < nint; i += size) {
        x = h * ((double)i + 0.5);
        sum += (4.0 / (1.0 + x * x));
    }

    // Reduce sum across all processes
    MPI_Reduce(&sum, &sBuf, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        sBuf *= h;
        printf("PI: %f\n", sBuf);
        // Optionally, print the error margin
        printf("Error: %f\n", fabs(sBuf - M_PI));
    }

    MPI_Finalize();
    return 0;
}