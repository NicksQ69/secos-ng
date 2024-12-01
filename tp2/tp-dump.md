
tp.o:     format de fichier elf32-i386


Déassemblage de la section .text :

00000000 <bp_handler_c>:
   0:	55                   	push   %ebp
   1:	89 e5                	mov    %esp,%ebp
   3:	83 ec 18             	sub    $0x18,%esp
   6:	83 ec 0c             	sub    $0xc,%esp
   9:	68 00 00 00 00       	push   $0x0
   e:	e8 fc ff ff ff       	call   f <bp_handler_c+0xf>
  13:	83 c4 10             	add    $0x10,%esp
  16:	8b 45 04             	mov    0x4(%ebp),%eax
  19:	89 45 f4             	mov    %eax,-0xc(%ebp)
  1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
  1f:	83 ec 08             	sub    $0x8,%esp
  22:	50                   	push   %eax
  23:	68 1d 00 00 00       	push   $0x1d
  28:	e8 fc ff ff ff       	call   29 <bp_handler_c+0x29>
  2d:	83 c4 10             	add    $0x10,%esp
  30:	90                   	nop
  31:	c9                   	leave
  32:	c3                   	ret

00000033 <bp_handler>:
  33:	55                   	push   %ebp
  34:	89 e5                	mov    %esp,%ebp
  36:	60                   	pusha
  37:	e8 fc ff ff ff       	call   38 <bp_handler+0x5>
  3c:	61                   	popa
  3d:	cf                   	iret
  3e:	90                   	nop
  3f:	5d                   	pop    %ebp
  40:	c3                   	ret

00000041 <bp_trigger>:
  41:	55                   	push   %ebp
  42:	89 e5                	mov    %esp,%ebp
  44:	83 ec 08             	sub    $0x8,%esp
  47:	cc                   	int3
  48:	83 ec 0c             	sub    $0xc,%esp
  4b:	68 30 00 00 00       	push   $0x30
  50:	e8 fc ff ff ff       	call   51 <bp_trigger+0x10>
  55:	83 c4 10             	add    $0x10,%esp
  58:	90                   	nop
  59:	c9                   	leave
  5a:	c3                   	ret

0000005b <tp>:
  5b:	55                   	push   %ebp
  5c:	89 e5                	mov    %esp,%ebp
  5e:	53                   	push   %ebx
  5f:	83 ec 14             	sub    $0x14,%esp
  62:	0f 01 4d ee          	sidtl  -0x12(%ebp)
  66:	8b 45 f0             	mov    -0x10(%ebp),%eax
  69:	83 ec 08             	sub    $0x8,%esp
  6c:	50                   	push   %eax
  6d:	68 51 00 00 00       	push   $0x51
  72:	e8 fc ff ff ff       	call   73 <tp+0x18>
  77:	83 c4 10             	add    $0x10,%esp
  7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
  7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
  80:	b8 00 00 00 00       	mov    $0x0,%eax
  85:	89 45 ea             	mov    %eax,-0x16(%ebp)
  88:	0f b7 5d ea          	movzwl -0x16(%ebp),%ebx
  8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
  8f:	8d 48 18             	lea    0x18(%eax),%ecx
  92:	0f b7 c3             	movzwl %bx,%eax
  95:	ba 00 00 00 00       	mov    $0x0,%edx
  9a:	89 01                	mov    %eax,(%ecx)
  9c:	89 51 04             	mov    %edx,0x4(%ecx)
  9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
  a2:	83 c0 18             	add    $0x18,%eax
  a5:	0f b6 50 02          	movzbl 0x2(%eax),%edx
  a9:	83 e2 00             	and    $0x0,%edx
  ac:	83 ca 08             	or     $0x8,%edx
  af:	88 50 02             	mov    %dl,0x2(%eax)
  b2:	0f b6 50 03          	movzbl 0x3(%eax),%edx
  b6:	83 e2 00             	and    $0x0,%edx
  b9:	88 50 03             	mov    %dl,0x3(%eax)
  bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
  bf:	83 c0 18             	add    $0x18,%eax
  c2:	0f b6 50 05          	movzbl 0x5(%eax),%edx
  c6:	83 e2 f0             	and    $0xfffffff0,%edx
  c9:	83 ca 0e             	or     $0xe,%edx
  cc:	88 50 05             	mov    %dl,0x5(%eax)
  cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
  d2:	83 c0 18             	add    $0x18,%eax
  d5:	0f b7 55 ec          	movzwl -0x14(%ebp),%edx
  d9:	0f b7 ca             	movzwl %dx,%ecx
  dc:	0f b6 d9             	movzbl %cl,%ebx
  df:	0f b6 48 06          	movzbl 0x6(%eax),%ecx
  e3:	83 e1 00             	and    $0x0,%ecx
  e6:	09 d9                	or     %ebx,%ecx
  e8:	88 48 06             	mov    %cl,0x6(%eax)
  eb:	66 c1 ea 08          	shr    $0x8,%dx
  ef:	0f b7 ca             	movzwl %dx,%ecx
  f2:	0f b6 50 07          	movzbl 0x7(%eax),%edx
  f6:	83 e2 00             	and    $0x0,%edx
  f9:	09 ca                	or     %ecx,%edx
  fb:	88 50 07             	mov    %dl,0x7(%eax)
  fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 101:	83 c0 18             	add    $0x18,%eax
 104:	0f b6 50 05          	movzbl 0x5(%eax),%edx
 108:	83 ca 80             	or     $0xffffff80,%edx
 10b:	88 50 05             	mov    %dl,0x5(%eax)
 10e:	e8 fc ff ff ff       	call   10f <tp+0xb4>
 113:	90                   	nop
 114:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 117:	c9                   	leave
 118:	c3                   	ret

Déassemblage de la section .rodata :

00000000 <.rodata>:
   0:	0a 42 72             	or     0x72(%edx),%al
   3:	65 61                	gs popa
   5:	6b 70 6f 69          	imul   $0x69,0x6f(%eax),%esi
   9:	6e                   	outsb  %ds:(%esi),(%dx)
   a:	74 20                	je     2c <.rodata+0x2c>
   c:	45                   	inc    %ebp
   d:	78 63                	js     72 <tp+0x17>
   f:	65 70 74             	gs jo  86 <tp+0x2b>
  12:	69 6f 6e 20 28 23 42 	imul   $0x42232820,0x6e(%edi),%ebp
  19:	50                   	push   %eax
  1a:	29 0a                	sub    %ecx,(%edx)
  1c:	00 56 61             	add    %dl,0x61(%esi)
  1f:	6c                   	insb   (%dx),%es:(%edi)
  20:	65 75 72             	gs jne 95 <tp+0x3a>
  23:	20 45 42             	and    %al,0x42(%ebp)
  26:	50                   	push   %eax
  27:	2d 34 3a 20 25       	sub    $0x25203a34,%eax
  2c:	70 0a                	jo     38 <.rodata+0x38>
  2e:	0a 00                	or     (%eax),%al
  30:	66 69 6e 69 73 68    	imul   $0x6873,0x69(%esi),%bp
  36:	65 64 20 23          	gs and %ah,%fs:(%ebx)
  3a:	42                   	inc    %edx
  3b:	50                   	push   %eax
  3c:	20 68 61             	and    %ch,0x61(%eax)
  3f:	6e                   	outsb  %ds:(%esi),(%dx)
  40:	64 6c                	fs insb (%dx),%es:(%edi)
  42:	65 72 20             	gs jb  65 <.rodata+0x65>
  45:	70 72                	jo     b9 <tp+0x5e>
  47:	6f                   	outsl  %ds:(%esi),(%dx)
  48:	63 65 73             	arpl   %esp,0x73(%ebp)
  4b:	73 69                	jae    b6 <tp+0x5b>
  4d:	6e                   	outsb  %ds:(%esi),(%dx)
  4e:	67 0a 00             	or     (%bx,%si),%al
  51:	41                   	inc    %ecx
  52:	64 72 65             	fs jb  ba <tp+0x5f>
  55:	73 73                	jae    ca <tp+0x6f>
  57:	65 20 64 65 20       	and    %ah,%gs:0x20(%ebp,%eiz,2)
  5c:	63 68 61             	arpl   %ebp,0x61(%eax)
  5f:	72 67                	jb     c8 <tp+0x6d>
  61:	65 6d                	gs insl (%dx),%es:(%edi)
  63:	65 6e                	outsb  %gs:(%esi),(%dx)
  65:	74 3a                	je     a1 <tp+0x46>
  67:	20                   	.byte 0x20
  68:	25                   	.byte 0x25
  69:	70 0a                	jo     75 <tp+0x1a>
	...

Déassemblage de la section .debug_info :

00000000 <.debug_info>:
   0:	c8 04 00 00          	enter  $0x4,$0x0
   4:	05 00 01 04 00       	add    $0x40100,%eax
   9:	00 00                	add    %al,(%eax)
   b:	00 12                	add    %dl,(%edx)
   d:	ff 01                	incl   (%ecx)
   f:	00 00                	add    %al,(%eax)
  11:	1d 00 00 00 00       	sbb    $0x0,%eax
  16:	05 00 00 00 00       	add    $0x0,%eax
  1b:	00 00                	add    %al,(%eax)
  1d:	00 19                	add    %bl,(%ecx)
  1f:	01 00                	add    %eax,(%eax)
  21:	00 00                	add    %al,(%eax)
  23:	00 00                	add    %al,(%eax)
  25:	00 01                	add    %al,(%ecx)
  27:	4d                   	dec    %ebp
  28:	00 00                	add    %al,(%eax)
  2a:	00 02                	add    %al,(%edx)
  2c:	1a 20                	sbb    (%eax),%ah
  2e:	32 00                	xor    (%eax),%al
  30:	00 00                	add    %al,(%eax)
  32:	05 01 08 89 00       	add    $0x890801,%eax
  37:	00 00                	add    %al,(%eax)
  39:	01 8b 01 00 00 02    	add    %ecx,0x2000001(%ebx)
  3f:	1b 20                	sbb    (%eax),%esp
  41:	45                   	inc    %ebp
  42:	00 00                	add    %al,(%eax)
  44:	00 05 02 07 e4 01    	add    %al,0x1e40702
  4a:	00 00                	add    %al,(%eax)
  4c:	01 b9 01 00 00 02    	add    %edi,0x2000001(%ecx)
  52:	1c 20                	sbb    $0x20,%al
  54:	58                   	pop    %eax
  55:	00 00                	add    %al,(%eax)
  57:	00 05 04 07 00 01    	add    %al,0x1000704
  5d:	00 00                	add    %al,(%eax)
  5f:	01 b0 01 00 00 02    	add    %esi,0x2000001(%eax)
  65:	1d 20 6b 00 00       	sbb    $0x6b20,%eax
  6a:	00 05 08 07 13 01    	add    %al,0x1130708
  70:	00 00                	add    %al,(%eax)
  72:	05 01 06 cd 01       	add    $0x1cd0601,%eax
  77:	00 00                	add    %al,(%eax)
  79:	01 80 00 00 00 02    	add    %eax,0x2000000(%eax)
  7f:	20 20                	and    %ah,(%eax)
  81:	85 00                	test   %eax,(%eax)
  83:	00 00                	add    %al,(%eax)
  85:	05 02 05 7c 01       	add    $0x17c0502,%eax
  8a:	00 00                	add    %al,(%eax)
  8c:	01 a4 00 00 00 02 21 	add    %esp,0x21020000(%eax,%eax,1)
  93:	20 98 00 00 00 13    	and    %bl,0x13000000(%eax)
  99:	04 05                	add    $0x5,%al
  9b:	69 6e 74 00 01 35 01 	imul   $0x1350100,0x74(%esi),%ebp
  a2:	00 00                	add    %al,(%eax)
  a4:	02 22                	add    (%edx),%ah
  a6:	20 ab 00 00 00 05    	and    %ch,0x5000000(%ebx)
  ac:	08 05 44 01 00 00    	or     %al,0x144
  b2:	05 01 06 64 01       	add    $0x1640601,%eax
  b7:	00 00                	add    %al,(%eax)
  b9:	14 b2                	adc    $0xb2,%al
  bb:	00 00                	add    %al,(%eax)
  bd:	00 01                	add    %al,(%ecx)
  bf:	1a 00                	sbb    (%eax),%al
  c1:	00 00                	add    %al,(%eax)
  c3:	02 25 20 ca 00 00    	add    0xca20,%ah
  c9:	00 05 04 07 ad 00    	add    %al,0xad0704
  cf:	00 00                	add    %al,(%eax)
  d1:	01 e7                	add    %esp,%edi
  d3:	00 00                	add    %al,(%eax)
  d5:	00 02                	add    %al,(%edx)
  d7:	26 20 ca             	es and %cl,%dl
  da:	00 00                	add    %al,(%eax)
  dc:	00 06                	add    %al,(%esi)
  de:	02 02                	add    (%edx),%al
  e0:	4c                   	dec    %esp
  e1:	04 01                	add    $0x1,%al
  e3:	01 00                	add    %eax,(%eax)
  e5:	00 02                	add    %al,(%edx)
  e7:	67 00 00             	add    %al,(%bx,%si)
  ea:	00 02                	add    %al,(%edx)
  ec:	4e                   	dec    %esi
  ed:	0f 26 00             	mov    %eax,%tr0
  f0:	00 00                	add    %al,(%eax)
  f2:	00 02                	add    %al,(%edx)
  f4:	c9                   	leave
  f5:	00 00                	add    %al,(%eax)
  f7:	00 02                	add    %al,(%edx)
  f9:	4f                   	dec    %edi
  fa:	0f 26 00             	mov    %eax,%tr0
  fd:	00 00                	add    %al,(%eax)
  ff:	01 00                	add    %eax,(%eax)
 101:	08 55 00             	or     %dl,0x0(%ebp)
 104:	00 00                	add    %al,(%eax)
 106:	02 02                	add    (%edx),%al
 108:	45                   	inc    %ebp
 109:	36 01 00             	add    %eax,%ss:(%eax)
 10c:	00 09                	add    %cl,(%ecx)
 10e:	72 61                	jb     171 <.debug_info+0x171>
 110:	77 00                	ja     112 <.debug_info+0x112>
 112:	47                   	inc    %edi
 113:	0d 39 00 00 00       	or     $0x39,%eax
 118:	03 c4                	add    %esp,%eax
 11a:	00 00                	add    %al,(%eax)
 11c:	00 02                	add    %al,(%edx)
 11e:	48                   	dec    %eax
 11f:	0d 79 00 00 00       	or     $0x79,%eax
 124:	03 86 01 00 00 02    	add    0x2000001(%esi),%eax
 12a:	49                   	dec    %ecx
 12b:	0d 36 01 00 00       	or     $0x136,%eax
 130:	04 dd                	add    $0xdd,%al
 132:	00 00                	add    %al,(%eax)
 134:	00 00                	add    %al,(%eax)
 136:	0c 26                	or     $0x26,%al
 138:	00 00                	add    %al,(%eax)
 13a:	00 46 01             	add    %al,0x1(%esi)
 13d:	00 00                	add    %al,(%eax)
 13f:	0d 58 00 00 00       	or     $0x58,%eax
 144:	01 00                	add    %eax,(%eax)
 146:	01 00                	add    %eax,(%eax)
 148:	00 00                	add    %al,(%eax)
 14a:	00 02                	add    %al,(%edx)
 14c:	53                   	push   %ebx
 14d:	1b 01                	sbb    (%ecx),%eax
 14f:	01 00                	add    %eax,(%eax)
 151:	00 06                	add    %al,(%esi)
 153:	04 02                	add    $0x2,%al
 155:	5f                   	pop    %edi
 156:	04 76                	add    $0x76,%al
 158:	01 00                	add    %eax,(%eax)
 15a:	00 02                	add    %al,(%edx)
 15c:	7a 00                	jp     15e <.debug_info+0x15e>
 15e:	00 00                	add    %al,(%eax)
 160:	02 61 0f             	add    0xf(%ecx),%ah
 163:	46                   	inc    %esi
 164:	01 00                	add    %eax,(%eax)
 166:	00 00                	add    %al,(%eax)
 168:	02 69 01             	add    0x1(%ecx),%ch
 16b:	00 00                	add    %al,(%eax)
 16d:	02 62 0f             	add    0xf(%edx),%ah
 170:	46                   	inc    %esi
 171:	01 00                	add    %eax,(%eax)
 173:	00 02                	add    %al,(%edx)
 175:	00 06                	add    %al,(%esi)
 177:	02 02                	add    (%edx),%al
 179:	6b 0a 9a             	imul   $0xffffff9a,(%edx),%ecx
 17c:	01 00                	add    %eax,(%eax)
 17e:	00 02                	add    %al,(%edx)
 180:	67 00 00             	add    %al,(%bx,%si)
 183:	00 02                	add    %al,(%edx)
 185:	6d                   	insl   (%dx),%es:(%edi)
 186:	15 26 00 00 00       	adc    $0x26,%eax
 18b:	00 02                	add    %al,(%edx)
 18d:	c9                   	leave
 18e:	00 00                	add    %al,(%eax)
 190:	00 02                	add    %al,(%edx)
 192:	6e                   	outsb  %ds:(%esi),(%dx)
 193:	15 26 00 00 00       	adc    $0x26,%eax
 198:	01 00                	add    %eax,(%eax)
 19a:	0a 02                	or     (%edx),%al
 19c:	02 69 07             	add    0x7(%ecx),%ch
 19f:	b5 01                	mov    $0x1,%ch
 1a1:	00 00                	add    %al,(%eax)
 1a3:	04 76                	add    $0x76,%al
 1a5:	01 00                	add    %eax,(%eax)
 1a7:	00 03                	add    %al,(%ebx)
 1a9:	30 01                	xor    %al,(%ecx)
 1ab:	00 00                	add    %al,(%eax)
 1ad:	02 72 13             	add    0x13(%edx),%dh
 1b0:	39 00                	cmp    %eax,(%eax)
 1b2:	00 00                	add    %al,(%eax)
 1b4:	00 06                	add    %al,(%esi)
 1b6:	04 02                	add    $0x2,%al
 1b8:	67 04 d2             	addr16 add $0xd2,%al
 1bb:	01 00                	add    %eax,(%eax)
 1bd:	00 0b                	add    %cl,(%ebx)
 1bf:	9a 01 00 00 00 02 0d 	lcall  $0xd02,$0x1
 1c6:	01 00                	add    %eax,(%eax)
 1c8:	00 02                	add    %al,(%edx)
 1ca:	76 10                	jbe    1dc <.debug_info+0x1dc>
 1cc:	39 00                	cmp    %eax,(%eax)
 1ce:	00 00                	add    %al,(%eax)
 1d0:	02 00                	add    (%eax),%al
 1d2:	08 9e 01 00 00 04    	or     %bl,0x4000001(%esi)
 1d8:	02 58 0c             	add    0xc(%eax),%bl
 1db:	02 00                	add    (%eax),%al
 1dd:	00 09                	add    %cl,(%ecx)
 1df:	72 61                	jb     242 <.debug_info+0x242>
 1e1:	77 00                	ja     1e3 <.debug_info+0x1e3>
 1e3:	5a                   	pop    %edx
 1e4:	0d 4c 00 00 00       	or     $0x4c,%eax
 1e9:	03 c4                	add    %esp,%eax
 1eb:	00 00                	add    %al,(%eax)
 1ed:	00 02                	add    %al,(%edx)
 1ef:	5b                   	pop    %ebx
 1f0:	0d 8c 00 00 00       	or     $0x8c,%eax
 1f5:	03 86 01 00 00 02    	add    0x2000001(%esi),%eax
 1fb:	5c                   	pop    %esp
 1fc:	0d 0c 02 00 00       	or     $0x20c,%eax
 201:	04 52                	add    $0x52,%al
 203:	01 00                	add    %eax,(%eax)
 205:	00 04 b5 01 00 00 00 	add    %al,0x1(,%esi,4)
 20c:	0c 26                	or     $0x26,%al
 20e:	00 00                	add    %al,(%eax)
 210:	00 1c 02             	add    %bl,(%edx,%eax,1)
 213:	00 00                	add    %al,(%eax)
 215:	0d 58 00 00 00       	or     $0x58,%eax
 21a:	03 00                	add    (%eax),%eax
 21c:	01 21                	add    %esp,(%ecx)
 21e:	00 00                	add    %al,(%eax)
 220:	00 02                	add    %al,(%edx)
 222:	7a 1b                	jp     23f <.debug_info+0x23f>
 224:	d2 01                	rolb   %cl,(%ecx)
 226:	00 00                	add    %al,(%eax)
 228:	06                   	push   %es
 229:	08 02                	or     %al,(%edx)
 22b:	86 04 4c             	xchg   %al,(%esp,%ecx,2)
 22e:	02 00                	add    (%eax),%al
 230:	00 02                	add    %al,(%edx)
 232:	fb                   	sti
 233:	00 00                	add    %al,(%eax)
 235:	00 02                	add    %al,(%edx)
 237:	88 0f                	mov    %cl,(%edi)
 239:	1c 02                	sbb    $0x2,%al
 23b:	00 00                	add    %al,(%eax)
 23d:	00 02                	add    %al,(%edx)
 23f:	3e 01 00             	add    %eax,%ds:(%eax)
 242:	00 02                	add    %al,(%edx)
 244:	89 0f                	mov    %ecx,(%edi)
 246:	1c 02                	sbb    $0x2,%al
 248:	00 00                	add    %al,(%eax)
 24a:	04 00                	add    $0x0,%al
 24c:	06                   	push   %es
 24d:	02 02                	add    (%edx),%al
 24f:	96                   	xchg   %eax,%esi
 250:	10 70 02             	adc    %dh,0x2(%eax)
 253:	00 00                	add    %al,(%eax)
 255:	02 67 00             	add    0x0(%edi),%ah
 258:	00 00                	add    %al,(%eax)
 25a:	02 98 1b 26 00 00    	add    0x261b(%eax),%bl
 260:	00 00                	add    %al,(%eax)
 262:	02 c9                	add    %cl,%cl
 264:	00 00                	add    %al,(%eax)
 266:	00 02                	add    %al,(%edx)
 268:	99                   	cltd
 269:	1b 26                	sbb    (%esi),%esp
 26b:	00 00                	add    %al,(%eax)
 26d:	00 01                	add    %al,(%ecx)
 26f:	00 0a                	add    %cl,(%edx)
 271:	02 02                	add    (%edx),%al
 273:	94                   	xchg   %eax,%esp
 274:	0d 8b 02 00 00       	or     $0x28b,%eax
 279:	04 4c                	add    $0x4c,%al
 27b:	02 00                	add    (%eax),%al
 27d:	00 03                	add    %al,(%ebx)
 27f:	30 01                	xor    %al,(%ecx)
 281:	00 00                	add    %al,(%eax)
 283:	02 9d 19 39 00 00    	add    0x3919(%ebp),%bl
 289:	00 00                	add    %al,(%eax)
 28b:	06                   	push   %es
 28c:	04 02                	add    $0x2,%al
 28e:	92                   	xchg   %eax,%edx
 28f:	0a a8 02 00 00 0b    	or     0xb000002(%eax),%ch
 295:	70 02                	jo     299 <.debug_info+0x299>
 297:	00 00                	add    %al,(%eax)
 299:	00 02                	add    %al,(%edx)
 29b:	0d 01 00 00 02       	or     $0x2000001,%eax
 2a0:	a1 16 39 00 00       	mov    0x3916,%eax
 2a5:	00 02                	add    %al,(%edx)
 2a7:	00 0a                	add    %cl,(%edx)
 2a9:	04 02                	add    $0x2,%al
 2ab:	90                   	nop
 2ac:	07                   	pop    %es
 2ad:	c2 02 00             	ret    $0x2
 2b0:	00 04 8b             	add    %al,(%ebx,%ecx,4)
 2b3:	02 00                	add    (%eax),%al
 2b5:	00 09                	add    %cl,(%ecx)
 2b7:	6c                   	insb   (%dx),%es:(%edi)
 2b8:	6f                   	outsl  %ds:(%esi),(%dx)
 2b9:	77 00                	ja     2bb <.debug_info+0x2bb>
 2bb:	a5                   	movsl  %ds:(%esi),%es:(%edi)
 2bc:	14 4c                	adc    $0x4c,%al
 2be:	00 00                	add    %al,(%eax)
 2c0:	00 00                	add    %al,(%eax)
 2c2:	06                   	push   %es
 2c3:	08 02                	or     %al,(%edx)
 2c5:	8e 04 df             	mov    (%edi,%ebx,8),%es
 2c8:	02 00                	add    (%eax),%al
 2ca:	00 0b                	add    %cl,(%ebx)
 2cc:	a8 02                	test   $0x2,%al
 2ce:	00 00                	add    %al,(%eax)
 2d0:	00 02                	add    %al,(%edx)
 2d2:	cf                   	iret
 2d3:	00 00                	add    %al,(%eax)
 2d5:	00 02                	add    %al,(%edx)
 2d7:	a9 11 4c 00 00       	test   $0x4c11,%eax
 2dc:	00 04 00             	add    %al,(%eax,%eax,1)
 2df:	08 52 01             	or     %dl,0x1(%edx)
 2e2:	00 00                	add    %al,(%eax)
 2e4:	08 02                	or     %al,(%edx)
 2e6:	7f 19                	jg     301 <.debug_info+0x301>
 2e8:	03 00                	add    (%eax),%eax
 2ea:	00 09                	add    %cl,(%ecx)
 2ec:	72 61                	jb     34f <.debug_info+0x34f>
 2ee:	77 00                	ja     2f0 <.debug_info+0x2f0>
 2f0:	81 0d 5f 00 00 00 03 	orl    $0xc403,0x5f
 2f7:	c4 00 00 
 2fa:	00 02                	add    %al,(%edx)
 2fc:	82 0d 9f 00 00 00 03 	orb    $0x3,0x9f
 303:	86 01                	xchg   %al,(%ecx)
 305:	00 00                	add    %al,(%eax)
 307:	02 83 0d 19 03 00    	add    0x3190d(%ebx),%al
 30d:	00 04 28             	add    %al,(%eax,%ebp,1)
 310:	02 00                	add    (%eax),%al
 312:	00 04 c2             	add    %al,(%edx,%eax,8)
 315:	02 00                	add    (%eax),%al
 317:	00 00                	add    %al,(%eax)
 319:	0c 26                	or     $0x26,%al
 31b:	00 00                	add    %al,(%eax)
 31d:	00 29                	add    %ch,(%ecx)
 31f:	03 00                	add    (%eax),%eax
 321:	00 0d 58 00 00 00    	add    %cl,0x58
 327:	07                   	pop    %es
 328:	00 01                	add    %al,(%ecx)
 32a:	f7 01 00 00 02 ad    	testl  $0xad020000,(%ecx)
 330:	1b df                	sbb    %edi,%ebx
 332:	02 00                	add    (%eax),%al
 334:	00 06                	add    %al,(%esi)
 336:	08 03                	or     %al,(%ebx)
 338:	46                   	inc    %esi
 339:	04 a9                	add    $0xa9,%al
 33b:	03 00                	add    (%eax),%eax
 33d:	00 07                	add    %al,(%edi)
 33f:	08 00                	or     %al,(%eax)
 341:	00 00                	add    %al,(%eax)
 343:	48                   	dec    %eax
 344:	5f                   	pop    %edi
 345:	00 00                	add    %al,(%eax)
 347:	00 10                	add    %dl,(%eax)
 349:	00 07                	add    %al,(%edi)
 34b:	6c                   	insb   (%dx),%es:(%edi)
 34c:	00 00                	add    %al,(%eax)
 34e:	00 49 5f             	add    %cl,0x5f(%ecx)
 351:	00 00                	add    %al,(%eax)
 353:	00 10                	add    %dl,(%eax)
 355:	10 0e                	adc    %cl,(%esi)
 357:	69 73 74 00 4a 5f 00 	imul   $0x5f4a00,0x74(%ebx),%esi
 35e:	00 00                	add    %al,(%eax)
 360:	03 20                	add    (%eax),%esp
 362:	07                   	pop    %es
 363:	d9 00                	flds   (%eax)
 365:	00 00                	add    %al,(%eax)
 367:	4b                   	dec    %ebx
 368:	5f                   	pop    %edi
 369:	00 00                	add    %al,(%eax)
 36b:	00 05 23 07 77 01    	add    %al,0x1770723
 371:	00 00                	add    %al,(%eax)
 373:	4c                   	dec    %esp
 374:	5f                   	pop    %edi
 375:	00 00                	add    %al,(%eax)
 377:	00 04 28             	add    %al,(%eax,%ebp,1)
 37a:	07                   	pop    %es
 37b:	e0 00                	loopne 37d <.debug_info+0x37d>
 37d:	00 00                	add    %al,(%eax)
 37f:	4d                   	dec    %ebp
 380:	5f                   	pop    %edi
 381:	00 00                	add    %al,(%eax)
 383:	00 01                	add    %al,(%ecx)
 385:	2c 0e                	sub    $0xe,%al
 387:	64 70 6c             	fs jo  3f6 <.debug_info+0x3f6>
 38a:	00 4e 5f             	add    %cl,0x5f(%esi)
 38d:	00 00                	add    %al,(%eax)
 38f:	00 02                	add    %al,(%edx)
 391:	2d 0e 70 00 4f       	sub    $0x4f00700e,%eax
 396:	5f                   	pop    %edi
 397:	00 00                	add    %al,(%eax)
 399:	00 01                	add    %al,(%ecx)
 39b:	2f                   	das
 39c:	07                   	pop    %es
 39d:	11 00                	adc    %eax,(%eax)
 39f:	00 00                	add    %al,(%eax)
 3a1:	50                   	push   %eax
 3a2:	5f                   	pop    %edi
 3a3:	00 00                	add    %al,(%eax)
 3a5:	00 10                	add    %dl,(%eax)
 3a7:	30 00                	xor    %al,(%eax)
 3a9:	08 9f 03 00 00 08    	or     %bl,0x8000003(%edi)
 3af:	03 44 c0 03          	add    0x3(%eax,%eax,8),%eax
 3b3:	00 00                	add    %al,(%eax)
 3b5:	04 35                	add    $0x35,%al
 3b7:	03 00                	add    (%eax),%eax
 3b9:	00 04 29             	add    %al,(%ecx,%ebp,1)
 3bc:	03 00                	add    (%eax),%eax
 3be:	00 00                	add    %al,(%eax)
 3c0:	01 f0                	add    %esi,%eax
 3c2:	00 00                	add    %al,(%eax)
 3c4:	00 03                	add    %al,(%ebx)
 3c6:	56                   	push   %esi
 3c7:	1b a9 03 00 00 0a    	sbb    0xa000003(%ecx),%ebp
 3cd:	04 03                	add    $0x3,%al
 3cf:	5e                   	pop    %esi
 3d0:	04 ee                	add    $0xee,%al
 3d2:	03 00                	add    (%eax),%eax
 3d4:	00 03                	add    %al,(%ebx)
 3d6:	bf 00 00 00 03       	mov    $0x3000000,%edi
 3db:	60                   	pusha
 3dc:	14 d1                	adc    $0xd1,%al
 3de:	00 00                	add    %al,(%eax)
 3e0:	00 03                	add    %al,(%ebx)
 3e2:	75 00                	jne    3e4 <.debug_info+0x3e4>
 3e4:	00 00                	add    %al,(%eax)
 3e6:	03 61 15             	add    0x15(%ecx),%esp
 3e9:	ee                   	out    %al,(%dx)
 3ea:	03 00                	add    (%eax),%eax
 3ec:	00 00                	add    %al,(%eax)
 3ee:	0f c0 03             	xadd   %al,(%ebx)
 3f1:	00 00                	add    %al,(%eax)
 3f3:	15 29 00 00 00       	adc    $0x29,%eax
 3f8:	06                   	push   %es
 3f9:	03 5b 10             	add    0x10(%ebx),%ebx
 3fc:	14 04                	adc    $0x4,%al
 3fe:	00 00                	add    %al,(%eax)
 400:	02 2a                	add    (%edx),%ch
 402:	01 00                	add    %eax,(%eax)
 404:	00 03                	add    %al,(%ebx)
 406:	5d                   	pop    %ebp
 407:	14 39                	adc    $0x39,%al
 409:	00 00                	add    %al,(%eax)
 40b:	00 00                	add    %al,(%eax)
 40d:	0b cc                	or     %esp,%ecx
 40f:	03 00                	add    (%eax),%eax
 411:	00 02                	add    %al,(%edx)
 413:	00 01                	add    %al,(%ecx)
 415:	94                   	xchg   %eax,%esp
 416:	01 00                	add    %eax,(%eax)
 418:	00 03                	add    %al,(%ebx)
 41a:	64 1b f3             	fs sbb %ebx,%esi
 41d:	03 00                	add    (%eax),%eax
 41f:	00 16                	add    %dl,(%esi)
 421:	70 01                	jo     424 <.debug_info+0x424>
 423:	00 00                	add    %al,(%eax)
 425:	04 0d                	add    $0xd,%al
 427:	0a be 00 00 00 37    	or     0x37000000(%esi),%bh
 42d:	04 00                	add    $0x0,%al
 42f:	00 17                	add    %dl,(%edi)
 431:	37                   	aaa
 432:	04 00                	add    $0x0,%al
 434:	00 18                	add    %bl,(%eax)
 436:	00 0f                	add    %cl,(%edi)
 438:	b9 00 00 00 19       	mov    $0x19000000,%ecx
 43d:	74 70                	je     4af <.debug_info+0x4af>
 43f:	00 01                	add    %al,(%ecx)
 441:	23 06                	and    (%esi),%eax
 443:	5b                   	pop    %ebx
 444:	00 00                	add    %al,(%eax)
 446:	00 be 00 00 00 01    	add    %bh,0x1000000(%esi)
 44c:	9c                   	pushf
 44d:	86 04 00             	xchg   %al,(%eax,%eax,1)
 450:	00 10                	add    %dl,(%eax)
 452:	d4 00                	aam    $0x0
 454:	00 00                	add    %al,(%eax)
 456:	24 0c                	and    $0xc,%al
 458:	14 04                	adc    $0x4,%al
 45a:	00 00                	add    %al,(%eax)
 45c:	02 91 66 11 69 64    	add    0x64691166(%ecx),%dl
 462:	74 00                	je     464 <.debug_info+0x464>
 464:	29 0e                	sub    %ecx,(%esi)
 466:	ee                   	out    %al,(%dx)
 467:	03 00                	add    (%eax),%eax
 469:	00 02                	add    %al,(%edx)
 46b:	91                   	xchg   %eax,%ecx
 46c:	6c                   	insb   (%dx),%es:(%edi)
 46d:	1a 80 00 00 00 8e    	sbb    -0x72000000(%eax),%al
 473:	00 00                	add    %al,(%eax)
 475:	00 10                	add    %dl,(%eax)
 477:	bf 00 00 00 2c       	mov    $0x2c000000,%edi
 47c:	02 1c 02             	add    (%edx,%eax,1),%bl
 47f:	00 00                	add    %al,(%eax)
 481:	02 91 62 00 00 1b    	add    0x1b000062(%ecx),%dl
 487:	c2 01 00             	ret    $0x1
 48a:	00 01                	add    %al,(%ecx)
 48c:	1e                   	push   %ds
 48d:	06                   	push   %es
 48e:	41                   	inc    %ecx
 48f:	00 00                	add    %al,(%eax)
 491:	00 1a                	add    %bl,(%edx)
 493:	00 00                	add    %al,(%eax)
 495:	00 01                	add    %al,(%ecx)
 497:	9c                   	pushf
 498:	1c d9                	sbb    $0xd9,%al
 49a:	01 00                	add    %eax,(%eax)
 49c:	00 01                	add    %al,(%ecx)
 49e:	14 06                	adc    $0x6,%al
 4a0:	33 00                	xor    (%eax),%eax
 4a2:	00 00                	add    %al,(%eax)
 4a4:	0e                   	push   %cs
 4a5:	00 00                	add    %al,(%eax)
 4a7:	00 01                	add    %al,(%ecx)
 4a9:	9c                   	pushf
 4aa:	1d 97 00 00 00       	sbb    $0x97,%eax
 4af:	01 05 06 00 00 00    	add    %eax,0x6
 4b5:	00 33                	add    %dh,(%ebx)
 4b7:	00 00                	add    %al,(%eax)
 4b9:	00 01                	add    %al,(%ecx)
 4bb:	9c                   	pushf
 4bc:	11 76 61             	adc    %esi,0x61(%esi)
 4bf:	6c                   	insb   (%dx),%es:(%edi)
 4c0:	00 07                	add    %al,(%edi)
 4c2:	0b 4c 00 00          	or     0x0(%eax,%eax,1),%ecx
 4c6:	00 02                	add    %al,(%edx)
 4c8:	91                   	xchg   %eax,%ecx
 4c9:	6c                   	insb   (%dx),%es:(%edi)
	...

Déassemblage de la section .debug_abbrev :

00000000 <.debug_abbrev>:
   0:	01 16                	add    %edx,(%esi)
   2:	00 03                	add    %al,(%ebx)
   4:	0e                   	push   %cs
   5:	3a 0b                	cmp    (%ebx),%cl
   7:	3b 0b                	cmp    (%ebx),%ecx
   9:	39 0b                	cmp    %ecx,(%ebx)
   b:	49                   	dec    %ecx
   c:	13 00                	adc    (%eax),%eax
   e:	00 02                	add    %al,(%edx)
  10:	0d 00 03 0e 3a       	or     $0x3a0e0300,%eax
  15:	0b 3b                	or     (%ebx),%edi
  17:	0b 39                	or     (%ecx),%edi
  19:	0b 49 13             	or     0x13(%ecx),%ecx
  1c:	38 0b                	cmp    %cl,(%ebx)
  1e:	00 00                	add    %al,(%eax)
  20:	03 0d 00 03 0e 3a    	add    0x3a0e0300,%ecx
  26:	0b 3b                	or     (%ebx),%edi
  28:	0b 39                	or     (%ecx),%edi
  2a:	0b 49 13             	or     0x13(%ecx),%ecx
  2d:	00 00                	add    %al,(%eax)
  2f:	04 0d                	add    $0xd,%al
  31:	00 49 13             	add    %cl,0x13(%ecx)
  34:	00 00                	add    %al,(%eax)
  36:	05 24 00 0b 0b       	add    $0xb0b0024,%eax
  3b:	3e 0b 03             	or     %ds:(%ebx),%eax
  3e:	0e                   	push   %cs
  3f:	00 00                	add    %al,(%eax)
  41:	06                   	push   %es
  42:	13 01                	adc    (%ecx),%eax
  44:	0b 0b                	or     (%ebx),%ecx
  46:	3a 0b                	cmp    (%ebx),%cl
  48:	3b 0b                	cmp    (%ebx),%ecx
  4a:	39 0b                	cmp    %ecx,(%ebx)
  4c:	89 01                	mov    %eax,(%ecx)
  4e:	19 01                	sbb    %eax,(%ecx)
  50:	13 00                	adc    (%eax),%eax
  52:	00 07                	add    %al,(%edi)
  54:	0d 00 03 0e 3a       	or     $0x3a0e0300,%eax
  59:	21 03                	and    %eax,(%ebx)
  5b:	3b 0b                	cmp    (%ebx),%ecx
  5d:	39 21                	cmp    %esp,(%ecx)
  5f:	11 49 13             	adc    %ecx,0x13(%ecx)
  62:	0d 0b 6b 0b 00       	or     $0xb6b0b,%eax
  67:	00 08                	add    %cl,(%eax)
  69:	17                   	pop    %ss
  6a:	01 03                	add    %eax,(%ebx)
  6c:	0e                   	push   %cs
  6d:	0b 0b                	or     (%ebx),%ecx
  6f:	3a 0b                	cmp    (%ebx),%cl
  71:	3b 0b                	cmp    (%ebx),%ecx
  73:	39 21                	cmp    %esp,(%ecx)
  75:	0f 01 13             	lgdtl  (%ebx)
  78:	00 00                	add    %al,(%eax)
  7a:	09 0d 00 03 08 3a    	or     %ecx,0x3a080300
  80:	21 02                	and    %eax,(%edx)
  82:	3b 0b                	cmp    (%ebx),%ecx
  84:	39 0b                	cmp    %ecx,(%ebx)
  86:	49                   	dec    %ecx
  87:	13 00                	adc    (%eax),%eax
  89:	00 0a                	add    %cl,(%edx)
  8b:	17                   	pop    %ss
  8c:	01 0b                	add    %ecx,(%ebx)
  8e:	0b 3a                	or     (%edx),%edi
  90:	0b 3b                	or     (%ebx),%edi
  92:	0b 39                	or     (%ecx),%edi
  94:	0b 89 01 19 01 13    	or     0x13011901(%ecx),%ecx
  9a:	00 00                	add    %al,(%eax)
  9c:	0b 0d 00 49 13 38    	or     0x38134900,%ecx
  a2:	0b 00                	or     (%eax),%eax
  a4:	00 0c 01             	add    %cl,(%ecx,%eax,1)
  a7:	01 49 13             	add    %ecx,0x13(%ecx)
  aa:	01 13                	add    %edx,(%ebx)
  ac:	00 00                	add    %al,(%eax)
  ae:	0d 21 00 49 13       	or     $0x13490021,%eax
  b3:	2f                   	das
  b4:	0b 00                	or     (%eax),%eax
  b6:	00 0e                	add    %cl,(%esi)
  b8:	0d 00 03 08 3a       	or     $0x3a080300,%eax
  bd:	21 03                	and    %eax,(%ebx)
  bf:	3b 0b                	cmp    (%ebx),%ecx
  c1:	39 21                	cmp    %esp,(%ecx)
  c3:	11 49 13             	adc    %ecx,0x13(%ecx)
  c6:	0d 0b 6b 0b 00       	or     $0xb6b0b,%eax
  cb:	00 0f                	add    %cl,(%edi)
  cd:	0f 00 0b             	str    (%ebx)
  d0:	21 04 49             	and    %eax,(%ecx,%ecx,2)
  d3:	13 00                	adc    (%eax),%eax
  d5:	00 10                	add    %dl,(%eax)
  d7:	34 00                	xor    $0x0,%al
  d9:	03 0e                	add    (%esi),%ecx
  db:	3a 21                	cmp    (%ecx),%ah
  dd:	01 3b                	add    %edi,(%ebx)
  df:	0b 39                	or     (%ecx),%edi
  e1:	0b 49 13             	or     0x13(%ecx),%ecx
  e4:	02 18                	add    (%eax),%bl
  e6:	00 00                	add    %al,(%eax)
  e8:	11 34 00             	adc    %esi,(%eax,%eax,1)
  eb:	03 08                	add    (%eax),%ecx
  ed:	3a 21                	cmp    (%ecx),%ah
  ef:	01 3b                	add    %edi,(%ebx)
  f1:	0b 39                	or     (%ecx),%edi
  f3:	0b 49 13             	or     0x13(%ecx),%ecx
  f6:	02 18                	add    (%eax),%bl
  f8:	00 00                	add    %al,(%eax)
  fa:	12 11                	adc    (%ecx),%dl
  fc:	01 25 0e 13 0b 03    	add    %esp,0x30b130e
 102:	1f                   	pop    %ds
 103:	1b 1f                	sbb    (%edi),%ebx
 105:	11 01                	adc    %eax,(%ecx)
 107:	12 06                	adc    (%esi),%al
 109:	10 17                	adc    %dl,(%edi)
 10b:	00 00                	add    %al,(%eax)
 10d:	13 24 00             	adc    (%eax,%eax,1),%esp
 110:	0b 0b                	or     (%ebx),%ecx
 112:	3e 0b 03             	or     %ds:(%ebx),%eax
 115:	08 00                	or     %al,(%eax)
 117:	00 14 26             	add    %dl,(%esi,%eiz,1)
 11a:	00 49 13             	add    %cl,0x13(%ecx)
 11d:	00 00                	add    %al,(%eax)
 11f:	15 13 01 03 0e       	adc    $0xe030113,%eax
 124:	0b 0b                	or     (%ebx),%ecx
 126:	3a 0b                	cmp    (%ebx),%cl
 128:	3b 0b                	cmp    (%ebx),%ecx
 12a:	39 0b                	cmp    %ecx,(%ebx)
 12c:	01 13                	add    %edx,(%ebx)
 12e:	00 00                	add    %al,(%eax)
 130:	16                   	push   %ss
 131:	2e 01 3f             	add    %edi,%cs:(%edi)
 134:	19 03                	sbb    %eax,(%ebx)
 136:	0e                   	push   %cs
 137:	3a 0b                	cmp    (%ebx),%cl
 139:	3b 0b                	cmp    (%ebx),%ecx
 13b:	39 0b                	cmp    %ecx,(%ebx)
 13d:	27                   	daa
 13e:	19 49 13             	sbb    %ecx,0x13(%ecx)
 141:	3c 19                	cmp    $0x19,%al
 143:	01 13                	add    %edx,(%ebx)
 145:	00 00                	add    %al,(%eax)
 147:	17                   	pop    %ss
 148:	05 00 49 13 00       	add    $0x134900,%eax
 14d:	00 18                	add    %bl,(%eax)
 14f:	18 00                	sbb    %al,(%eax)
 151:	00 00                	add    %al,(%eax)
 153:	19 2e                	sbb    %ebp,(%esi)
 155:	01 3f                	add    %edi,(%edi)
 157:	19 03                	sbb    %eax,(%ebx)
 159:	08 3a                	or     %bh,(%edx)
 15b:	0b 3b                	or     (%ebx),%edi
 15d:	0b 39                	or     (%ecx),%edi
 15f:	0b 11                	or     (%ecx),%edx
 161:	01 12                	add    %edx,(%edx)
 163:	06                   	push   %es
 164:	40                   	inc    %eax
 165:	18 7c 19 01          	sbb    %bh,0x1(%ecx,%ebx,1)
 169:	13 00                	adc    (%eax),%eax
 16b:	00 1a                	add    %bl,(%edx)
 16d:	0b 01                	or     (%ecx),%eax
 16f:	11 01                	adc    %eax,(%ecx)
 171:	12 06                	adc    (%esi),%al
 173:	00 00                	add    %al,(%eax)
 175:	1b 2e                	sbb    (%esi),%ebp
 177:	00 3f                	add    %bh,(%edi)
 179:	19 03                	sbb    %eax,(%ebx)
 17b:	0e                   	push   %cs
 17c:	3a 0b                	cmp    (%ebx),%cl
 17e:	3b 0b                	cmp    (%ebx),%ecx
 180:	39 0b                	cmp    %ecx,(%ebx)
 182:	11 01                	adc    %eax,(%ecx)
 184:	12 06                	adc    (%esi),%al
 186:	40                   	inc    %eax
 187:	18 7c 19 00          	sbb    %bh,0x0(%ecx,%ebx,1)
 18b:	00 1c 2e             	add    %bl,(%esi,%ebp,1)
 18e:	00 3f                	add    %bh,(%edi)
 190:	19 03                	sbb    %eax,(%ebx)
 192:	0e                   	push   %cs
 193:	3a 0b                	cmp    (%ebx),%cl
 195:	3b 0b                	cmp    (%ebx),%ecx
 197:	39 0b                	cmp    %ecx,(%ebx)
 199:	11 01                	adc    %eax,(%ecx)
 19b:	12 06                	adc    (%esi),%al
 19d:	40                   	inc    %eax
 19e:	18 7a 19             	sbb    %bh,0x19(%edx)
 1a1:	00 00                	add    %al,(%eax)
 1a3:	1d 2e 01 3f 19       	sbb    $0x193f012e,%eax
 1a8:	03 0e                	add    (%esi),%ecx
 1aa:	3a 0b                	cmp    (%ebx),%cl
 1ac:	3b 0b                	cmp    (%ebx),%ecx
 1ae:	39 0b                	cmp    %ecx,(%ebx)
 1b0:	11 01                	adc    %eax,(%ecx)
 1b2:	12 06                	adc    (%esi),%al
 1b4:	40                   	inc    %eax
 1b5:	18 7c 19 00          	sbb    %bh,0x0(%ecx,%ebx,1)
	...

Déassemblage de la section .debug_aranges :

00000000 <.debug_aranges>:
   0:	1c 00                	sbb    $0x0,%al
   2:	00 00                	add    %al,(%eax)
   4:	02 00                	add    (%eax),%al
   6:	00 00                	add    %al,(%eax)
   8:	00 00                	add    %al,(%eax)
   a:	04 00                	add    $0x0,%al
	...
  14:	19 01                	sbb    %eax,(%ecx)
	...

Déassemblage de la section .debug_line :

00000000 <.debug_line>:
   0:	8f 00                	pop    (%eax)
   2:	00 00                	add    %al,(%eax)
   4:	05 00 04 00 3d       	add    $0x3d000400,%eax
   9:	00 00                	add    %al,(%eax)
   b:	00 01                	add    %al,(%ecx)
   d:	01 01                	add    %eax,(%ecx)
   f:	fb                   	sti
  10:	0e                   	push   %cs
  11:	0d 00 01 01 01       	or     $0x1010100,%eax
  16:	01 00                	add    %eax,(%eax)
  18:	00 00                	add    %al,(%eax)
  1a:	01 00                	add    %eax,(%eax)
  1c:	00 01                	add    %al,(%ecx)
  1e:	01 01                	add    %eax,(%ecx)
  20:	1f                   	pop    %ds
  21:	02 38                	add    (%eax),%bh
  23:	00 00                	add    %al,(%eax)
  25:	00 6b 00             	add    %ch,0x0(%ebx)
  28:	00 00                	add    %al,(%eax)
  2a:	02 01                	add    (%ecx),%al
  2c:	1f                   	pop    %ds
  2d:	02 0f                	add    (%edi),%cl
  2f:	05 7d 00 00 00       	add    $0x7d,%eax
  34:	00 82 00 00 00 00    	add    %al,0x0(%edx)
  3a:	87 00                	xchg   %eax,(%eax)
  3c:	00 00                	add    %al,(%eax)
  3e:	01 8f 00 00 00 01    	add    %ecx,0x1000000(%edi)
  44:	96                   	xchg   %eax,%esi
  45:	00 00                	add    %al,(%eax)
  47:	00 01                	add    %al,(%ecx)
  49:	05 15 00 05 02       	add    $0x2050015,%eax
  4e:	00 00                	add    %al,(%eax)
  50:	00 00                	add    %al,(%eax)
  52:	16                   	push   %ss
  53:	05 02 67 f4 67       	add    $0x67f46702,%eax
  58:	05 01 03 09 08       	add    $0x8090301,%eax
  5d:	3c 05                	cmp    $0x5,%al
  5f:	13 3e                	adc    (%esi),%edi
  61:	05 02 3d 05 01       	add    $0x1053d02,%eax
  66:	88 05 13 3f 05 02    	mov    %al,0x2053f13
  6c:	67 21 05             	and    %eax,(%di)
  6f:	01 f3                	add    %esi,%ebx
  71:	05 0b 3e 05 02       	add    $0x2053e0b,%eax
  76:	76 05                	jbe    7d <.debug_line+0x7d>
  78:	34 4c                	xor    $0x4c,%al
  7a:	05 02 3c 05 1a       	add    $0x1a053c02,%eax
  7f:	08 15 05 06 3c 05    	or     %dl,0x53c0605
  85:	02 3e                	add    (%esi),%bh
  87:	02 8e 01 14 05 01    	add    0x1051401(%esi),%cl
  8d:	59                   	pop    %ecx
  8e:	02 06                	add    (%esi),%al
  90:	00 01                	add    %al,(%ecx)
  92:	01                   	.byte 0x1

Déassemblage de la section .debug_str :

00000000 <.debug_str>:
   0:	72 61                	jb     63 <.debug_str+0x63>
   2:	77 31                	ja     35 <.debug_str+0x35>
   4:	36 5f                	ss pop %edi
   6:	74 00                	je     8 <.debug_str+0x8>
   8:	6f                   	outsl  %ds:(%esi),(%dx)
   9:	66 66 73 65          	data16 data16 jae 72 <.debug_str+0x72>
   d:	74 5f                	je     6e <.debug_str+0x6e>
   f:	31 00                	xor    %eax,(%eax)
  11:	6f                   	outsl  %ds:(%esi),(%dx)
  12:	66 66 73 65          	data16 data16 jae 7b <.debug_str+0x7b>
  16:	74 5f                	je     77 <.debug_str+0x77>
  18:	32 00                	xor    (%eax),%al
  1a:	73 69                	jae    85 <.debug_str+0x85>
  1c:	7a 65                	jp     83 <.debug_str+0x83>
  1e:	5f                   	pop    %edi
  1f:	74 00                	je     21 <.debug_str+0x21>
  21:	72 61                	jb     84 <.debug_str+0x84>
  23:	77 33                	ja     58 <.debug_str+0x58>
  25:	32 5f 74             	xor    0x74(%edi),%bl
  28:	00 69 6e             	add    %ch,0x6e(%ecx)
  2b:	74 65                	je     92 <.debug_str+0x92>
  2d:	72 72                	jb     a1 <.debug_str+0xa1>
  2f:	75 70                	jne    a1 <.debug_str+0xa1>
  31:	74 5f                	je     92 <.debug_str+0x92>
  33:	64 65 73 63          	fs gs jae 9a <.debug_str+0x9a>
  37:	72 69                	jb     a2 <.debug_str+0xa2>
  39:	70 74                	jo     af <.debug_str+0xaf>
  3b:	6f                   	outsl  %ds:(%esi),(%dx)
  3c:	72 5f                	jb     9d <.debug_str+0x9d>
  3e:	74 61                	je     a1 <.debug_str+0xa1>
  40:	62 6c 65 5f          	bound  %ebp,0x5f(%ebp,%eiz,2)
  44:	72 65                	jb     ab <.debug_str+0xab>
  46:	67 69 73 74 65 72 00 	imul   $0x75007265,0x74(%bp,%di),%esi
  4d:	75 
  4e:	69 6e 74 38 5f 74 00 	imul   $0x745f38,0x74(%esi),%ebp
  55:	72 61                	jb     b8 <.debug_str+0xb8>
  57:	77 5f                	ja     b8 <.debug_str+0xb8>
  59:	31 36                	xor    %esi,(%esi)
  5b:	5f                   	pop    %edi
  5c:	62 69 74             	bound  %ebp,0x74(%ecx)
  5f:	73 5f                	jae    c0 <.debug_str+0xc0>
  61:	65 6e                	outsb  %gs:(%esi),(%dx)
  63:	74 72                	je     d7 <.debug_str+0xd7>
  65:	79 00                	jns    67 <.debug_str+0x67>
  67:	62 6c 6f 77          	bound  %ebp,0x77(%edi,%ebp,2)
  6b:	00 73 65             	add    %dh,0x65(%ebx)
  6e:	6c                   	insb   (%dx),%es:(%edi)
  6f:	65 63 74 6f 72       	arpl   %esi,%gs:0x72(%edi,%ebp,2)
  74:	00 64 65 73          	add    %ah,0x73(%ebp,%eiz,2)
  78:	63 00                	arpl   %eax,(%eax)
  7a:	5f                   	pop    %edi
  7b:	77 6c                	ja     e9 <.debug_str+0xe9>
  7d:	6f                   	outsl  %ds:(%esi),(%dx)
  7e:	77 00                	ja     80 <.debug_str+0x80>
  80:	73 69                	jae    eb <.debug_str+0xeb>
  82:	6e                   	outsb  %ds:(%esi),(%dx)
  83:	74 31                	je     b6 <.debug_str+0xb6>
  85:	36 5f                	ss pop %edi
  87:	74 00                	je     89 <.debug_str+0x89>
  89:	75 6e                	jne    f9 <.debug_str+0xf9>
  8b:	73 69                	jae    f6 <.debug_str+0xf6>
  8d:	67 6e                	outsb  %ds:(%si),(%dx)
  8f:	65 64 20 63 68       	gs and %ah,%fs:0x68(%ebx)
  94:	61                   	popa
  95:	72 00                	jb     97 <.debug_str+0x97>
  97:	62 70 5f             	bound  %esi,0x5f(%eax)
  9a:	68 61 6e 64 6c       	push   $0x6c646e61
  9f:	65 72 5f             	gs jb  101 <.debug_str+0x101>
  a2:	63 00                	arpl   %eax,(%eax)
  a4:	73 69                	jae    10f <.debug_str+0x10f>
  a6:	6e                   	outsb  %ds:(%esi),(%dx)
  a7:	74 33                	je     dc <.debug_str+0xdc>
  a9:	32 5f 74             	xor    0x74(%edi),%bl
  ac:	00 6c 6f 6e          	add    %ch,0x6e(%edi,%ebp,2)
  b0:	67 20 75 6e          	and    %dh,0x6e(%di)
  b4:	73 69                	jae    11f <.debug_str+0x11f>
  b6:	67 6e                	outsb  %ds:(%si),(%dx)
  b8:	65 64 20 69 6e       	gs and %ch,%fs:0x6e(%ecx)
  bd:	74 00                	je     bf <.debug_str+0xbf>
  bf:	61                   	popa
  c0:	64 64 72 00          	fs fs jb c4 <.debug_str+0xc4>
  c4:	73 72                	jae    138 <.debug_str+0x138>
  c6:	61                   	popa
  c7:	77 00                	ja     c9 <.debug_str+0xc9>
  c9:	62 68 69             	bound  %ebp,0x69(%eax)
  cc:	67 68 00 68 69 67    	addr16 push $0x67696800
  d2:	68 00 69 64 74       	push   $0x74646900
  d7:	72 00                	jb     d9 <.debug_str+0xd9>
  d9:	7a 65                	jp     140 <.debug_str+0x140>
  db:	72 6f                	jb     14c <.debug_str+0x14c>
  dd:	5f                   	pop    %edi
  de:	31 00                	xor    %eax,(%eax)
  e0:	7a 65                	jp     147 <.debug_str+0x147>
  e2:	72 6f                	jb     153 <.debug_str+0x153>
  e4:	5f                   	pop    %edi
  e5:	32 00                	xor    (%eax),%al
  e7:	6f                   	outsl  %ds:(%esi),(%dx)
  e8:	66 66 73 65          	data16 data16 jae 151 <.debug_str+0x151>
  ec:	74 5f                	je     14d <.debug_str+0x14d>
  ee:	74 00                	je     f0 <.debug_str+0xf0>
  f0:	69 6e 74 5f 64 65 73 	imul   $0x7365645f,0x74(%esi),%ebp
  f7:	63 5f 74             	arpl   %ebx,0x74(%edi)
  fa:	00 5f 6c             	add    %bl,0x6c(%edi)
  fd:	6f                   	outsl  %ds:(%esi),(%dx)
  fe:	77 00                	ja     100 <.debug_str+0x100>
 100:	75 6e                	jne    170 <.debug_str+0x170>
 102:	73 69                	jae    16d <.debug_str+0x16d>
 104:	67 6e                	outsb  %ds:(%si),(%dx)
 106:	65 64 20 69 6e       	gs and %ch,%fs:0x6e(%ecx)
 10b:	74 00                	je     10d <.debug_str+0x10d>
 10d:	77 68                	ja     177 <.debug_str+0x177>
 10f:	69 67 68 00 6c 6f 6e 	imul   $0x6e6f6c00,0x68(%edi),%esp
 116:	67 20 6c 6f          	and    %ch,0x6f(%si)
 11a:	6e                   	outsb  %ds:(%esi),(%dx)
 11b:	67 20 75 6e          	and    %dh,0x6e(%di)
 11f:	73 69                	jae    18a <.debug_str+0x18a>
 121:	67 6e                	outsb  %ds:(%si),(%dx)
 123:	65 64 20 69 6e       	gs and %ch,%fs:0x6e(%ecx)
 128:	74 00                	je     12a <.debug_str+0x12a>
 12a:	6c                   	insb   (%dx),%es:(%edi)
 12b:	69 6d 69 74 00 77 6c 	imul   $0x6c770074,0x69(%ebp),%ebp
 132:	6f                   	outsl  %ds:(%esi),(%dx)
 133:	77 00                	ja     135 <.debug_str+0x135>
 135:	73 69                	jae    1a0 <.debug_str+0x1a0>
 137:	6e                   	outsb  %ds:(%esi),(%dx)
 138:	74 36                	je     170 <.debug_str+0x170>
 13a:	34 5f                	xor    $0x5f,%al
 13c:	74 00                	je     13e <.debug_str+0x13e>
 13e:	5f                   	pop    %edi
 13f:	68 69 67 68 00       	push   $0x686769
 144:	6c                   	insb   (%dx),%es:(%edi)
 145:	6f                   	outsl  %ds:(%esi),(%dx)
 146:	6e                   	outsb  %ds:(%esi),(%dx)
 147:	67 20 6c 6f          	and    %ch,0x6f(%si)
 14b:	6e                   	outsb  %ds:(%esi),(%dx)
 14c:	67 20 69 6e          	and    %ch,0x6e(%bx,%di)
 150:	74 00                	je     152 <.debug_str+0x152>
 152:	72 61                	jb     1b5 <.debug_str+0x1b5>
 154:	77 5f                	ja     1b5 <.debug_str+0x1b5>
 156:	36 34 5f             	ss xor $0x5f,%al
 159:	62 69 74             	bound  %ebp,0x74(%ecx)
 15c:	73 5f                	jae    1bd <.debug_str+0x1bd>
 15e:	65 6e                	outsb  %gs:(%esi),(%dx)
 160:	74 72                	je     1d4 <.debug_str+0x1d4>
 162:	79 00                	jns    164 <.debug_str+0x164>
 164:	63 68 61             	arpl   %ebp,0x61(%eax)
 167:	72 00                	jb     169 <.debug_str+0x169>
 169:	5f                   	pop    %edi
 16a:	77 68                	ja     1d4 <.debug_str+0x1d4>
 16c:	69 67 68 00 70 72 69 	imul   $0x69727000,0x68(%edi),%esp
 173:	6e                   	outsb  %ds:(%esi),(%dx)
 174:	74 66                	je     1dc <.debug_str+0x1dc>
 176:	00 74 79 70          	add    %dh,0x70(%ecx,%edi,2)
 17a:	65 00 73 68          	add    %dh,%gs:0x68(%ebx)
 17e:	6f                   	outsl  %ds:(%esi),(%dx)
 17f:	72 74                	jb     1f5 <.debug_str+0x1f5>
 181:	20 69 6e             	and    %ch,0x6e(%ecx)
 184:	74 00                	je     186 <.debug_str+0x186>
 186:	62 79 74             	bound  %edi,0x74(%ecx)
 189:	65 00 75 69          	add    %dh,%gs:0x69(%ebp)
 18d:	6e                   	outsb  %ds:(%esi),(%dx)
 18e:	74 31                	je     1c1 <.debug_str+0x1c1>
 190:	36 5f                	ss pop %edi
 192:	74 00                	je     194 <.debug_str+0x194>
 194:	69 64 74 5f 72 65 67 	imul   $0x5f676572,0x5f(%esp,%esi,2),%esp
 19b:	5f 
 19c:	74 00                	je     19e <.debug_str+0x19e>
 19e:	72 61                	jb     201 <.debug_str+0x201>
 1a0:	77 5f                	ja     201 <.debug_str+0x201>
 1a2:	33 32                	xor    (%edx),%esi
 1a4:	5f                   	pop    %edi
 1a5:	62 69 74             	bound  %ebp,0x74(%ecx)
 1a8:	73 5f                	jae    209 <.debug_str+0x209>
 1aa:	65 6e                	outsb  %gs:(%esi),(%dx)
 1ac:	74 72                	je     220 <.debug_str+0x220>
 1ae:	79 00                	jns    1b0 <.debug_str+0x1b0>
 1b0:	75 69                	jne    21b <.debug_str+0x21b>
 1b2:	6e                   	outsb  %ds:(%esi),(%dx)
 1b3:	74 36                	je     1eb <.debug_str+0x1eb>
 1b5:	34 5f                	xor    $0x5f,%al
 1b7:	74 00                	je     1b9 <.debug_str+0x1b9>
 1b9:	75 69                	jne    224 <.debug_str+0x224>
 1bb:	6e                   	outsb  %ds:(%esi),(%dx)
 1bc:	74 33                	je     1f1 <.debug_str+0x1f1>
 1be:	32 5f 74             	xor    0x74(%edi),%bl
 1c1:	00 62 70             	add    %ah,0x70(%edx)
 1c4:	5f                   	pop    %edi
 1c5:	74 72                	je     239 <.debug_str+0x239>
 1c7:	69 67 67 65 72 00 73 	imul   $0x73007265,0x67(%edi),%esp
 1ce:	69 67 6e 65 64 20 63 	imul   $0x63206465,0x6e(%edi),%esp
 1d5:	68 61 72 00 62       	push   $0x62007261
 1da:	70 5f                	jo     23b <.debug_str+0x23b>
 1dc:	68 61 6e 64 6c       	push   $0x6c646e61
 1e1:	65 72 00             	gs jb  1e4 <.debug_str+0x1e4>
 1e4:	73 68                	jae    24e <.debug_str+0x24e>
 1e6:	6f                   	outsl  %ds:(%esi),(%dx)
 1e7:	72 74                	jb     25d <.debug_str+0x25d>
 1e9:	20 75 6e             	and    %dh,0x6e(%ebp)
 1ec:	73 69                	jae    257 <.debug_str+0x257>
 1ee:	67 6e                	outsb  %ds:(%si),(%dx)
 1f0:	65 64 20 69 6e       	gs and %ch,%fs:0x6e(%ecx)
 1f5:	74 00                	je     1f7 <.debug_str+0x1f7>
 1f7:	72 61                	jb     25a <.debug_str+0x25a>
 1f9:	77 36                	ja     231 <.debug_str+0x231>
 1fb:	34 5f                	xor    $0x5f,%al
 1fd:	74 00                	je     1ff <.debug_str+0x1ff>
 1ff:	47                   	inc    %edi
 200:	4e                   	dec    %esi
 201:	55                   	push   %ebp
 202:	20 43 31             	and    %al,0x31(%ebx)
 205:	37                   	aaa
 206:	20 31                	and    %dh,(%ecx)
 208:	34 2e                	xor    $0x2e,%al
 20a:	32 2e                	xor    (%esi),%ch
 20c:	31 20                	xor    %esp,(%eax)
 20e:	32 30                	xor    (%eax),%dh
 210:	32 34 30             	xor    (%eax,%esi,1),%dh
 213:	39 31                	cmp    %esi,(%ecx)
 215:	32 20                	xor    (%eax),%ah
 217:	28 52 65             	sub    %dl,0x65(%edx)
 21a:	64 20 48 61          	and    %cl,%fs:0x61(%eax)
 21e:	74 20                	je     240 <.debug_str+0x240>
 220:	31 34 2e             	xor    %esi,(%esi,%ebp,1)
 223:	32 2e                	xor    (%esi),%ch
 225:	31 2d 33 29 20 2d    	xor    %ebp,0x2d202933
 22b:	6d                   	insl   (%dx),%es:(%edi)
 22c:	6e                   	outsb  %ds:(%esi),(%dx)
 22d:	6f                   	outsl  %ds:(%esi),(%dx)
 22e:	2d 6d 6d 78 20       	sub    $0x20786d6d,%eax
 233:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 238:	73 73                	jae    2ad <.debug_str+0x2ad>
 23a:	65 20 2d 6d 6e 6f 2d 	and    %ch,%gs:0x2d6f6e6d
 241:	73 73                	jae    2b6 <.debug_str+0x2b6>
 243:	65 32 20             	xor    %gs:(%eax),%ah
 246:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 24b:	73 73                	jae    2c0 <.debug_str+0x2c0>
 24d:	65 33 20             	xor    %gs:(%eax),%esp
 250:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 255:	73 73                	jae    2ca <.debug_str+0x2ca>
 257:	73 65                	jae    2be <.debug_str+0x2be>
 259:	33 20                	xor    (%eax),%esp
 25b:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 260:	73 73                	jae    2d5 <.debug_str+0x2d5>
 262:	65 34 2e             	gs xor $0x2e,%al
 265:	31 20                	xor    %esp,(%eax)
 267:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 26c:	73 73                	jae    2e1 <.debug_str+0x2e1>
 26e:	65 34 2e             	gs xor $0x2e,%al
 271:	32 20                	xor    (%eax),%ah
 273:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 278:	73 73                	jae    2ed <.debug_str+0x2ed>
 27a:	65 34 20             	gs xor $0x20,%al
 27d:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 282:	61                   	popa
 283:	76 78                	jbe    2fd <.debug_str+0x2fd>
 285:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 28b:	61                   	popa
 28c:	76 78                	jbe    306 <.debug_str+0x306>
 28e:	32 20                	xor    (%eax),%ah
 290:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 295:	61                   	popa
 296:	65 73 20             	gs jae 2b9 <.debug_str+0x2b9>
 299:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 29e:	70 63                	jo     303 <.debug_str+0x303>
 2a0:	6c                   	insb   (%dx),%es:(%edi)
 2a1:	6d                   	insl   (%dx),%es:(%edi)
 2a2:	75 6c                	jne    310 <.debug_str+0x310>
 2a4:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 2aa:	66 73 67             	data16 jae 314 <.debug_str+0x314>
 2ad:	73 62                	jae    311 <.debug_str+0x311>
 2af:	61                   	popa
 2b0:	73 65                	jae    317 <.debug_str+0x317>
 2b2:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 2b8:	72 64                	jb     31e <.debug_str+0x31e>
 2ba:	72 6e                	jb     32a <.debug_str+0x32a>
 2bc:	64 20 2d 6d 6e 6f 2d 	and    %ch,%fs:0x2d6f6e6d
 2c3:	66 31 36             	xor    %si,(%esi)
 2c6:	63 20                	arpl   %esp,(%eax)
 2c8:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 2cd:	66 6d                	insw   (%dx),%es:(%edi)
 2cf:	61                   	popa
 2d0:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 2d6:	73 73                	jae    34b <.debug_str+0x34b>
 2d8:	65 34 61             	gs xor $0x61,%al
 2db:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 2e1:	66 6d                	insw   (%dx),%es:(%edi)
 2e3:	61                   	popa
 2e4:	34 20                	xor    $0x20,%al
 2e6:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 2eb:	78 6f                	js     35c <.debug_str+0x35c>
 2ed:	70 20                	jo     30f <.debug_str+0x30f>
 2ef:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 2f4:	6c                   	insb   (%dx),%es:(%edi)
 2f5:	77 70                	ja     367 <.debug_str+0x367>
 2f7:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 2fd:	33 64 6e 6f          	xor    0x6f(%esi,%ebp,2),%esp
 301:	77 20                	ja     323 <.debug_str+0x323>
 303:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 308:	70 6f                	jo     379 <.debug_str+0x379>
 30a:	70 63                	jo     36f <.debug_str+0x36f>
 30c:	6e                   	outsb  %ds:(%esi),(%dx)
 30d:	74 20                	je     32f <.debug_str+0x32f>
 30f:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 314:	61                   	popa
 315:	62 6d 20             	bound  %ebp,0x20(%ebp)
 318:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 31d:	62 6d 69             	bound  %ebp,0x69(%ebp)
 320:	20 2d 6d 6e 6f 2d    	and    %ch,0x2d6f6e6d
 326:	62 6d 69             	bound  %ebp,0x69(%ebp)
 329:	32 20                	xor    (%eax),%ah
 32b:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 330:	6c                   	insb   (%dx),%es:(%edi)
 331:	7a 63                	jp     396 <.debug_str+0x396>
 333:	6e                   	outsb  %ds:(%esi),(%dx)
 334:	74 20                	je     356 <.debug_str+0x356>
 336:	2d 6d 6e 6f 2d       	sub    $0x2d6f6e6d,%eax
 33b:	74 62                	je     39f <.debug_str+0x39f>
 33d:	6d                   	insl   (%dx),%es:(%edi)
 33e:	20 2d 6d 33 32 20    	and    %ch,0x2032336d
 344:	2d 6d 74 75 6e       	sub    $0x6e75746d,%eax
 349:	65 3d 67 65 6e 65    	gs cmp $0x656e6567,%eax
 34f:	72 69                	jb     3ba <tp+0x35f>
 351:	63 20                	arpl   %esp,(%eax)
 353:	2d 6d 61 72 63       	sub    $0x6372616d,%eax
 358:	68 3d 69 36 38       	push   $0x3836693d
 35d:	36 20 2d 67 20 2d 66 	and    %ch,%ss:0x662d2067
 364:	66 72 65             	data16 jb 3cc <tp+0x371>
 367:	65 73 74             	gs jae 3de <tp+0x383>
 36a:	61                   	popa
 36b:	6e                   	outsb  %ds:(%esi),(%dx)
 36c:	64 69 6e 67 20 2d 66 	imul   $0x6d662d20,%fs:0x67(%esi),%ebp
 373:	6d 
 374:	73 2d                	jae    3a3 <.debug_str+0x3a3>
 376:	65 78 74             	gs js  3ed <tp+0x392>
 379:	65 6e                	outsb  %gs:(%esi),(%dx)
 37b:	73 69                	jae    3e6 <tp+0x38b>
 37d:	6f                   	outsl  %ds:(%esi),(%dx)
 37e:	6e                   	outsb  %ds:(%esi),(%dx)
 37f:	73 20                	jae    3a1 <.debug_str+0x3a1>
 381:	2d 66 6e 6f 2d       	sub    $0x2d6f6e66,%eax
 386:	73 74                	jae    3fc <tp+0x3a1>
 388:	61                   	popa
 389:	63 6b 2d             	arpl   %ebp,0x2d(%ebx)
 38c:	70 72                	jo     400 <tp+0x3a5>
 38e:	6f                   	outsl  %ds:(%esi),(%dx)
 38f:	74 65                	je     3f6 <tp+0x39b>
 391:	63 74 6f 72          	arpl   %esi,0x72(%edi,%ebp,2)
 395:	20 2d 66 6e 6f 2d    	and    %ch,0x2d6f6e66
 39b:	70 69                	jo     406 <tp+0x3ab>
 39d:	63 00                	arpl   %eax,(%eax)
 39f:	69 6e 74 65 72 72 75 	imul   $0x75727265,0x74(%esi),%ebp
 3a6:	70 74                	jo     41c <tp+0x3c1>
 3a8:	5f                   	pop    %edi
 3a9:	64 65 73 63          	fs gs jae 410 <tp+0x3b5>
 3ad:	72 69                	jb     418 <tp+0x3bd>
 3af:	70 74                	jo     425 <tp+0x3ca>
 3b1:	6f                   	outsl  %ds:(%esi),(%dx)
 3b2:	72 00                	jb     3b4 <tp+0x359>

Déassemblage de la section .debug_line_str :

00000000 <.debug_line_str>:
   0:	74 70                	je     72 <.debug_line_str+0x72>
   2:	2e 63 00             	arpl   %eax,%cs:(%eax)
   5:	2f                   	das
   6:	68 6f 6d 65 2f       	push   $0x2f656d6f
   b:	6e                   	outsb  %ds:(%esi),(%dx)
   c:	69 63 6f 6c 61 73 2f 	imul   $0x2f73616c,0x6f(%ebx),%esp
  13:	44                   	inc    %esp
  14:	6f                   	outsl  %ds:(%esi),(%dx)
  15:	63 75 6d             	arpl   %esi,0x6d(%ebp)
  18:	65 6e                	outsb  %gs:(%esi),(%dx)
  1a:	74 73                	je     8f <.debug_line_str+0x8f>
  1c:	2f                   	das
  1d:	4e                   	dec    %esi
  1e:	37                   	aaa
  1f:	2f                   	das
  20:	54                   	push   %esp
  21:	4c                   	dec    %esp
  22:	53                   	push   %ebx
  23:	2d 53 45 43 2f       	sub    $0x2f434553,%eax
  28:	4f                   	dec    %edi
  29:	53                   	push   %ebx
  2a:	2f                   	das
  2b:	73 65                	jae    92 <.debug_line_str+0x92>
  2d:	63 6f 73             	arpl   %ebp,0x73(%edi)
  30:	2d 6e 67 2f 74       	sub    $0x742f676e,%eax
  35:	70 32                	jo     69 <.debug_line_str+0x69>
  37:	00 2f                	add    %ch,(%edi)
  39:	68 6f 6d 65 2f       	push   $0x2f656d6f
  3e:	6e                   	outsb  %ds:(%esi),(%dx)
  3f:	69 63 6f 6c 61 73 2f 	imul   $0x2f73616c,0x6f(%ebx),%esp
  46:	44                   	inc    %esp
  47:	6f                   	outsl  %ds:(%esi),(%dx)
  48:	63 75 6d             	arpl   %esi,0x6d(%ebp)
  4b:	65 6e                	outsb  %gs:(%esi),(%dx)
  4d:	74 73                	je     c2 <tp+0x67>
  4f:	2f                   	das
  50:	4e                   	dec    %esi
  51:	37                   	aaa
  52:	2f                   	das
  53:	54                   	push   %esp
  54:	4c                   	dec    %esp
  55:	53                   	push   %ebx
  56:	2d 53 45 43 2f       	sub    $0x2f434553,%eax
  5b:	4f                   	dec    %edi
  5c:	53                   	push   %ebx
  5d:	2f                   	das
  5e:	73 65                	jae    c5 <tp+0x6a>
  60:	63 6f 73             	arpl   %ebp,0x73(%edi)
  63:	2d 6e 67 2f 74       	sub    $0x742f676e,%eax
  68:	70 32                	jo     9c <.debug_line_str+0x9c>
  6a:	00 2e                	add    %ch,(%esi)
  6c:	2e 2f                	cs das
  6e:	6b 65 72 6e          	imul   $0x6e,0x72(%ebp),%esp
  72:	65 6c                	gs insb (%dx),%es:(%edi)
  74:	2f                   	das
  75:	69 6e 63 6c 75 64 65 	imul   $0x6564756c,0x63(%esi),%ebp
  7c:	00 74 70 2e          	add    %dh,0x2e(%eax,%esi,2)
  80:	63 00                	arpl   %eax,(%eax)
  82:	74 70                	je     f4 <tp+0x99>
  84:	2e 63 00             	arpl   %eax,%cs:(%eax)
  87:	74 79                	je     102 <tp+0xa7>
  89:	70 65                	jo     f0 <tp+0x95>
  8b:	73 2e                	jae    bb <tp+0x60>
  8d:	68 00 69 6e 74       	push   $0x746e6900
  92:	72 2e                	jb     c2 <tp+0x67>
  94:	68 00 70 72 69       	push   $0x69727000
  99:	6e                   	outsb  %ds:(%esi),(%dx)
  9a:	74 2e                	je     ca <tp+0x6f>
  9c:	68                   	.byte 0x68
	...

Déassemblage de la section .comment :

00000000 <.comment>:
   0:	00 47 43             	add    %al,0x43(%edi)
   3:	43                   	inc    %ebx
   4:	3a 20                	cmp    (%eax),%ah
   6:	28 47 4e             	sub    %al,0x4e(%edi)
   9:	55                   	push   %ebp
   a:	29 20                	sub    %esp,(%eax)
   c:	31 34 2e             	xor    %esi,(%esi,%ebp,1)
   f:	32 2e                	xor    (%esi),%ch
  11:	31 20                	xor    %esp,(%eax)
  13:	32 30                	xor    (%eax),%dh
  15:	32 34 30             	xor    (%eax,%esi,1),%dh
  18:	39 31                	cmp    %esi,(%ecx)
  1a:	32 20                	xor    (%eax),%ah
  1c:	28 52 65             	sub    %dl,0x65(%edx)
  1f:	64 20 48 61          	and    %cl,%fs:0x61(%eax)
  23:	74 20                	je     45 <bp_trigger+0x4>
  25:	31 34 2e             	xor    %esi,(%esi,%ebp,1)
  28:	32 2e                	xor    (%esi),%ch
  2a:	31                   	.byte 0x31
  2b:	2d                   	.byte 0x2d
  2c:	33 29                	xor    (%ecx),%ebp
	...

Déassemblage de la section .note.gnu.property :

00000000 <.note.gnu.property>:
   0:	04 00                	add    $0x0,%al
   2:	00 00                	add    %al,(%eax)
   4:	18 00                	sbb    %al,(%eax)
   6:	00 00                	add    %al,(%eax)
   8:	05 00 00 00 47       	add    $0x47000000,%eax
   d:	4e                   	dec    %esi
   e:	55                   	push   %ebp
   f:	00 02                	add    %al,(%edx)
  11:	00 01                	add    %al,(%ecx)
  13:	c0 04 00 00          	rolb   $0x0,(%eax,%eax,1)
  17:	00 00                	add    %al,(%eax)
  19:	00 00                	add    %al,(%eax)
  1b:	00 01                	add    %al,(%ecx)
  1d:	00 01                	add    %al,(%ecx)
  1f:	c0 04 00 00          	rolb   $0x0,(%eax,%eax,1)
  23:	00 01                	add    %al,(%ecx)
  25:	00 00                	add    %al,(%eax)
	...

Déassemblage de la section .eh_frame :

00000000 <.eh_frame>:
   0:	14 00                	adc    $0x0,%al
   2:	00 00                	add    %al,(%eax)
   4:	00 00                	add    %al,(%eax)
   6:	00 00                	add    %al,(%eax)
   8:	01 7a 52             	add    %edi,0x52(%edx)
   b:	00 01                	add    %al,(%ecx)
   d:	7c 08                	jl     17 <.eh_frame+0x17>
   f:	01 1b                	add    %ebx,(%ebx)
  11:	0c 04                	or     $0x4,%al
  13:	04 88                	add    $0x88,%al
  15:	01 00                	add    %eax,(%eax)
  17:	00 1c 00             	add    %bl,(%eax,%eax,1)
  1a:	00 00                	add    %al,(%eax)
  1c:	1c 00                	sbb    $0x0,%al
  1e:	00 00                	add    %al,(%eax)
  20:	00 00                	add    %al,(%eax)
  22:	00 00                	add    %al,(%eax)
  24:	33 00                	xor    (%eax),%eax
  26:	00 00                	add    %al,(%eax)
  28:	00 41 0e             	add    %al,0xe(%ecx)
  2b:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
  31:	6f                   	outsl  %ds:(%esi),(%dx)
  32:	c5 0c 04             	lds    (%esp,%eax,1),%ecx
  35:	04 00                	add    $0x0,%al
  37:	00 1c 00             	add    %bl,(%eax,%eax,1)
  3a:	00 00                	add    %al,(%eax)
  3c:	3c 00                	cmp    $0x0,%al
  3e:	00 00                	add    %al,(%eax)
  40:	33 00                	xor    (%eax),%eax
  42:	00 00                	add    %al,(%eax)
  44:	0e                   	push   %cs
  45:	00 00                	add    %al,(%eax)
  47:	00 00                	add    %al,(%eax)
  49:	41                   	inc    %ecx
  4a:	0e                   	push   %cs
  4b:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
  51:	4a                   	dec    %edx
  52:	c5 0c 04             	lds    (%esp,%eax,1),%ecx
  55:	04 00                	add    $0x0,%al
  57:	00 1c 00             	add    %bl,(%eax,%eax,1)
  5a:	00 00                	add    %al,(%eax)
  5c:	5c                   	pop    %esp
  5d:	00 00                	add    %al,(%eax)
  5f:	00 41 00             	add    %al,0x0(%ecx)
  62:	00 00                	add    %al,(%eax)
  64:	1a 00                	sbb    (%eax),%al
  66:	00 00                	add    %al,(%eax)
  68:	00 41 0e             	add    %al,0xe(%ecx)
  6b:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
  71:	56                   	push   %esi
  72:	c5 0c 04             	lds    (%esp,%eax,1),%ecx
  75:	04 00                	add    $0x0,%al
  77:	00 20                	add    %ah,(%eax)
  79:	00 00                	add    %al,(%eax)
  7b:	00 7c 00 00          	add    %bh,0x0(%eax,%eax,1)
  7f:	00 5b 00             	add    %bl,0x0(%ebx)
  82:	00 00                	add    %al,(%eax)
  84:	be 00 00 00 00       	mov    $0x0,%esi
  89:	41                   	inc    %ecx
  8a:	0e                   	push   %cs
  8b:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
  91:	44                   	inc    %esp
  92:	83 03 02             	addl   $0x2,(%ebx)
  95:	b6 c5                	mov    $0xc5,%dh
  97:	c3                   	ret
  98:	0c 04                	or     $0x4,%al
  9a:	04 00                	add    $0x0,%al
