
	#ifndef	_CHARACTER_H_
	#define	_CHARACTER_H_
	
		

		const unsigned char code SPACE[6]								={  0x00 , 0x00 , 0x00 , 0x00 , 0x00 ,0x00 };       // 32 = <space>
		
    const unsigned char code BIG_A[6]								={  0x7E , 0x09 , 0x09 , 0x09 , 0x7E ,0X00 };       // 65 = A
    const unsigned char code BIG_B[6]								={  0x7F , 0x49 , 0x49 , 0x49 , 0x36 ,0X00 };       // 66 = B
    const unsigned char code BIG_C[6]								={  0x3E , 0x41 , 0x41 , 0x41 , 0x22 ,0X00 };       // 67 = C
    const unsigned char code BIG_D[6]								={  0x7F , 0x41 , 0x41 , 0x41 , 0x3E ,0X00 };       // 68 = D
    const unsigned char code BIG_E[6]								={  0x7F , 0x49 , 0x49 , 0x49 , 0x41 ,0X00 };       // 69 = E
    const unsigned char code BIG_F[6]								={  0x7F , 0x09 , 0x09 , 0x09 , 0x01 ,0X00 };       // 70 = F
    const unsigned char code BIG_G[6]								={  0x3E , 0x41 , 0x49 , 0x49 , 0x7A ,0X00 };       // 71 = G
    const unsigned char code BIG_H[6]								={  0x7F , 0x08 , 0x08 , 0x08 , 0x7F ,0X00 };       // 72 = H
    const unsigned char code BIG_I[6]								={  0x00 , 0x41 , 0x7F , 0x41 , 0x00 ,0X00 };       // 73 = I
    const unsigned char code BIG_J[6]								={  0x30 , 0x40 , 0x40 , 0x40 , 0x3F ,0X00 };       // 74 = J
    const unsigned char code BIG_K[6]								={  0x7F , 0x08 , 0x14 , 0x22 , 0x41 ,0X00 };       // 75 = K
    const unsigned char code BIG_L[6]								={  0x7F , 0x40 , 0x40 , 0x40 , 0x40 ,0X00 };       // 76 = L
    const unsigned char code BIG_M[6]								={  0x7F , 0x02 , 0x04 , 0x02 , 0x7F ,0X00 };       // 77 = M
    const unsigned char code BIG_N[6]								={  0x7F , 0x02 , 0x04 , 0x08 , 0x7F ,0X00 };       // 78 = N
    const unsigned char code BIG_O[6]								={  0x3E , 0x41 , 0x41 , 0x41 , 0x3E ,0X00 };       // 79 = O
    const unsigned char code BIG_P[6]								={  0x7F , 0x09 , 0x09 , 0x09 , 0x06 ,0X00 };       // 80 = P
    const unsigned char code BIG_Q[6]								={  0x3E , 0x41 , 0x51 , 0x21 , 0x5E ,0X00 };       // 81 = Q
    const unsigned char code BIG_R[6]								={  0x7F , 0x09 , 0x09 , 0x19 , 0x66 ,0X00 };       // 82 = R
    const unsigned char code BIG_S[6]								={  0x26 , 0x49 , 0x49 , 0x49 , 0x32 ,0X00 };       // 83 = S
    const unsigned char code BIG_T[6]								={  0x01 , 0x01 , 0x7F , 0x01 , 0x01 ,0X00 };       // 84 = T
    const unsigned char code BIG_U[6]								={  0x3F , 0x40 , 0x40 , 0x40 , 0x3F ,0X00 };       // 85 = U
    const unsigned char code BIG_V[6]								={  0x1F , 0x20 , 0x40 , 0x20 , 0x1F ,0X00 };       // 86 = V
    const unsigned char code BIG_W[6]								={  0x3F , 0x40 , 0x3C , 0x40 , 0x3F ,0X00 };       // 87 = W
    const unsigned char code BIG_X[6]								={  0x63 , 0x14 , 0x08 , 0x14 , 0x63 ,0X00 };       // 88 = X
    const unsigned char code BIG_Y[6]								={  0x07 , 0x08 , 0x70 , 0x08 , 0x07 ,0X00 };       // 89 = Y
    const unsigned char code BIG_Z[6]								={  0x71 , 0x49 , 0x45 , 0x43 , 0x00 ,0X00 };       // 90 = Z

    const unsigned char code SML_A[6]								={  0x20 , 0x54 , 0x54 , 0x54 , 0x78 ,0X00 };       // 97 = a
    const unsigned char code SML_B[6]								={  0x7F , 0x44 , 0x44 , 0x44 , 0x38 ,0X00 };       // 98 = b
    const unsigned char code SML_C[6]								={  0x38 , 0x44 , 0x44 , 0x44 , 0x28 ,0X00 };       // 99 = c
    const unsigned char code SML_D[6]								={  0x38 , 0x44 , 0x44 , 0x44 , 0x7F ,0X00 };       // 100 = d
    const unsigned char code SML_E[6]								={  0x38 , 0x54 , 0x54 , 0x54 , 0x18 ,0X00 };       // 101 = e
    const unsigned char code SML_F[6]								={  0x08 , 0x7E , 0x09 , 0x09 , 0x00 ,0X00 };       // 102 = f
    const unsigned char code SML_G[6]								={  0x18 , 0xA4 , 0xA4 , 0xA4 , 0x7C ,0X00 };       // 103 = g
    const unsigned char code SML_H[6]								={  0x7F , 0x04 , 0x04 , 0x78 , 0x00 ,0X00 };       // 104 = h
    const unsigned char code SML_I[6]								={  0x00 , 0x00 , 0x7D , 0x00 , 0x00 ,0X00 };       // 105 = i
    const unsigned char code SML_J[6]								={  0x40 , 0x80 , 0x84 , 0x7D , 0x00 ,0X00 };       // 106 = j
    const unsigned char code SML_K[6]								={  0x7F , 0x10 , 0x28 , 0x44 , 0x00 ,0X00 };       // 107 = k
    const unsigned char code SML_L[6]								={  0x00 , 0x00 , 0x7F , 0x40 , 0x00 ,0X00 };       // 108 = l
    const unsigned char code SML_M[6]								={  0x7C , 0x04 , 0x18 , 0x04 , 0x78 ,0X00 };       // 109 = m
    const unsigned char code SML_N[6]								={  0x7C , 0x04 , 0x04 , 0x78 , 0x00 ,0X00 };       // 110 = n
    const unsigned char code SML_O[6]								={  0x38 , 0x44 , 0x44 , 0x44 , 0x38 ,0X00 };       // 111 = o
    const unsigned char code SML_P[6]								={  0xFC , 0x44 , 0x44 , 0x44 , 0x38 ,0X00 };       // 112 = p
    const unsigned char code SML_Q[6]								={  0x38 , 0x44 , 0x44 , 0x44 , 0xFC ,0X00 };       // 113 = q
    const unsigned char code SML_R[6]								={  0x44 , 0x78 , 0x44 , 0x04 , 0x08 ,0X00 };       // 114 = r
    const unsigned char code SML_S[6]								={  0x08 , 0x54 , 0x54 , 0x54 , 0x20 ,0X00 };       // 115 = s
    const unsigned char code SML_T[6]								={  0x04 , 0x3E , 0x44 , 0x24 , 0x00 ,0X00 };       // 116 = t
    const unsigned char code SML_U[6]								={  0x3C , 0x40 , 0x20 , 0x7C , 0x00 ,0X00 };       // 117 = u
    const unsigned char code SML_V[6]								={  0x1C , 0x20 , 0x40 , 0x20 , 0x1C ,0X00 };       // 118 = v
    const unsigned char code SML_W[6]								={  0x3C , 0x60 , 0x30 , 0x60 , 0x3C ,0X00 };       // 119 = w
    const unsigned char code SML_X[6]								={  0x6C , 0x10 , 0x10 , 0x6C , 0x00 ,0X00 };       // 120 = x
    const unsigned char code SML_Y[6]								={  0x9C , 0xA0 , 0x60 , 0x3C , 0x00 ,0X00 };       // 121 = y
    const unsigned char code SML_Z[6]								={  0x64 , 0x54 , 0x54 , 0x4C , 0x00 ,0X00 };       // 122 = z

		
	#endif
	
	
	
	
	
	