`timescale 1ns / 1ps

`define DEBUG

`ifdef XILINX_ISIM			//Ĭ�ϵ�Xilinx ISE�ķ���ģ��ʱ�����Զ�����XILINX_ISIM
	`define SIMULATING		//��Դ������������йصĴ�����������ﱻ����
`endif

//`define NO_MMU  // disable memory management unit
//`define NO_IC  // disable instruction cache
//`define NO_DC  // disable data cache

`define NO_PS2_WRITE
