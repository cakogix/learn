#include <mpi.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int rank, size, tag = 1;
    int senddata, recvdata;
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if(rank == 0)
    {
        senddata = 9999;
        MPI_Send(&senddata, 1, MPI_INT, 1, tag, MPI_COMM_WORLD);
    }
    else if (rank == 1)
    {
MPI_Recv(&recvdata,1,MPI_INT,0,tag, MPI_COMM_WORLD,&status);
MPI_Finalize();
 return 0;
    }
}
