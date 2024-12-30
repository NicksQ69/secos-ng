# tp_exam

## Adresses du kernel

```
Kernel start : 0x300000
Kernel end : 0x600000
```

## Adresses physiques du code utilisateur

Dans `/utils/linker.lds`, on créer 2 sections de code : une pour chaque fonction utilisateur.

```
USER1 memory range :            [0x1000000 - 0x1ffffff]
USER2 memory range :            [0x2000000 - 0x2ffffff]
```

## Adresses virtuelles utilisateur

Dans `kernel/core/pagfunc.c`, on créer 3 tables de pages pour chaque fonction utilisateur.

**User1 :**

```
pgd  :            0x1100000
ptb0 :            0x1101000
ptb1 :            0x1102000
ptb2 :            0x1103000
```

**User2 :**

```
pgd  :            0x2100000
ptb0 :            0x2101000
ptb1 :            0x2102000
ptb2 :            0x2103000
```
