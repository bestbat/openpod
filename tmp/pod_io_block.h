#ifndef POD_IO_BLOCK_H
#define POD_IO_BLOCK_H

#include "pod_types.h"
#include "pod_rq.h"

//*******************************************************************
//
// OpenPOD
//
// Block dev (disk) IO structs and operation ids
//
//*******************************************************************


// �������� ���� operation ��� ������ � ������� ������� class_interface
enum pod_block_operartions 
{
	nop, 
	read, write, 
	trim		// SSD specific
};

// trim
struct pod_block_rq
{
	diskaddr_t	block_no;
	uint32_t	block_count;
	uint32_t	block_size;
};

// read, write
struct pod_block_io_rq
{
	diskaddr_t	block_no;
	uint32_t	block_count;
	uint32_t	block_size;

	physaddr_t	physmem_addr;
};




#endif // POD_IO_BLOCK_H
