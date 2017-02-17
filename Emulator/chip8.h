class chip8
{
	public:
		chip8();
		~chip8();
	
		bool drawFlag;
		
		void emulateCycle();
		void debugRender();
		bool loadApplication(const char * filename);
		double clockTimer();

		//Chip 8 variables
		unsigned char key[16]; // hexpad
		unsigned char gfx[64 * 32]; //  64x32 pixels = 2048
		
	private:
		
		unsigned char memory[4096]; // Memory
		unsigned char V[16]; // Register slots
		unsigned short stack[16]; // stack slots 

		unsigned short opcode; // operation code 
		int opcount; // number of opcodes
		int ops = 500; // opcode per seconds
		unsigned short I; // Index register
		unsigned short pc; // Program counter
		unsigned short sp; // stack pointer 
		
		unsigned char delay_timer; // delay timer
		unsigned char sound_timer; // sound timer 
		

		
		void initialize();
};
