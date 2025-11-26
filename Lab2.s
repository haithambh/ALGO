# Lab 2: Arithmetic and Logical Operations
# Student: [HAITHAM ROUIHA] - [06]

.data
prompt1:    .asciiz "Enter the first integer: "
prompt2:    .asciiz "Enter the second integer: "
sum_msg:    .asciiz "Sum: "
diff_msg:   .asciiz "Difference: "
prod_msg:   .asciiz "Product: "
quot_msg:   .asciiz "Quotient: "
nl:         .asciiz "\n"

.text
.globl main
main:
    # Ask first integer
    li $v0,4
    la $a0,prompt1
    syscall

    li $v0,5
    syscall
    move $s0,$v0       # s0 = first integer

    # Ask second integer
    li $v0,4
    la $a0,prompt2
    syscall

    li $v0,5
    syscall
    move $s1,$v0       # s1 = second integer

    # ---------------------------
    # Sum
    add $t0,$s0,$s1

    li $v0,4
    la $a0,sum_msg
    syscall

    li $v0,1
    move $a0,$t0
    syscall

    li $v0,4
    la $a0,nl
    syscall

    # ---------------------------
    # Difference
    sub $t1,$s0,$s1

    li $v0,4
    la $a0,diff_msg
    syscall

    li $v0,1
    move $a0,$t1
    syscall

    li $v0,4
    la $a0,nl
    syscall

    # ---------------------------
    # Product
    mul $t2,$s0,$s1

    li $v0,4
    la $a0,prod_msg
    syscall

    li $v0,1
    move $a0,$t2
    syscall

    li $v0,4
    la $a0,nl
    syscall

    # ---------------------------
    # Quotient
    div $s0,$s1
    mflo $t3       # quotient

    li $v0,4
    la $a0,quot_msg
    syscall

    li $v0,1
    move $a0,$t3
    syscall

    li $v0,4
    la $a0,nl
    syscall

    # Exit
    li $v0,10
    syscall