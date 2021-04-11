static const int PERIPHERAL_BASE = 0x40000000;
static const int AHB1_BASE = PERIPHERAL_BASE + 0x20000;
static const int RCC_BASE = AHB1_BASE + 0x3800;
static const int GPIOA_BASE = AHB1_BASE;
static const int GPIOB_BASE = AHB1_BASE + 0x400;
static const int GPIOC_BASE = AHB1_BASE + 0x800;
static const int GPIOD_BASE = AHB1_BASE + 0xC00;
static const int GPIOE_BASE = AHB1_BASE + 0x1000;
static const int GPIOH_BASE = AHB1_BASE + 0x1C00;

typedef struct GPIOType
{
	volatile int MODER;
	volatile int OTYPER;
	volatile int OSPEEDR;
	volatile int PUPDR;
	volatile int IDR;
	volatile int ODR;
	volatile int BSRR;
	volatile int LCKR;
	volatile int AFR[2];
} GPIOType;

typedef struct RCCType
{
	volatile int CR;
	volatile int PLLCFGR;
	volatile int CFGR;
	volatile int CIR;
	volatile int AHB1RSTR;
	volatile int AHB2RSTR;
	         int PADDING1[2];
	volatile int APB1RSTR;
	volatile int APB2RSTR;
	         int PADDING2[2];
	volatile int AHB1ENR;
	volatile int AHB2ENR;
	         int PADDING3[2];
	volatile int APB1ENR;
	volatile int APB2ENR;
	         int PADDING4[2];
	volatile int AHB1LPENR;
	volatile int AHB2LPENR;
	         int PADDING5[2];
	volatile int APB1LPENR;
	volatile int APB2LPENR;
	         int PADDING6[2];
	volatile int BDCR;
	volatile int CSR;
	         int PADDING7[2];
	volatile int SSCGR;
	volatile int PLLI2SCFGR;
	         int PADDING8;
	volatile int DCKCFGR;
} RCCType;

static RCCType* RCC = (RCCType*) RCC_BASE;
static GPIOType* GPIOA = (GPIOType*) GPIOA_BASE;
static GPIOType* GPIOB = (GPIOType*) GPIOB_BASE;
static GPIOType* GPIOC = (GPIOType*) GPIOC_BASE;
static GPIOType* GPIOD = (GPIOType*) GPIOD_BASE;
static GPIOType* GPIOE = (GPIOType*) GPIOE_BASE;
static GPIOType* GPIOH = (GPIOType*) GPIOH_BASE;

static const int GPIOA_EN = 1<<0;
static const int GPIOB_EN = 1<<1;
static const int GPIOC_EN = 1<<2;
static const int GPIOD_EN = 1<<3;
static const int GPIOE_EN = 1<<4;
static const int GPIOH_EN = 1<<7;

static const int MODER_5_OUT = 1<<10;
static const int LED_PIN = 1<<5;

int main()
{
	RCC->AHB1ENR |= GPIOA_EN | GPIOB_EN;
	GPIOA->MODER |= MODER_5_OUT;
	GPIOB->MODER |= MODER_5_OUT;
	
	while (1)
	{
		for (int x = 0; x < 900000; x++)
		{
			GPIOA->ODR |= LED_PIN;
			GPIOB->ODR |= LED_PIN;
		}
		for (int x = 0; x < 900000; x++)
		{
			GPIOA->ODR &= ~LED_PIN;
			GPIOB->ODR &= ~LED_PIN;
		}
	}
}
