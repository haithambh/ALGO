# Lab 1: Introduction to QTSpim and Basic I/O
# Student: [Your Name Here] - [ Group 06]

    .data
hello_msg: .asciiz "Hello, MIPS!\n"
name_msg:  .asciiz "Haitham rouiha\n"
num_msg:   .asciiz "21: "
nl:        .asciiz "\n"

    .text
    .globl main
main:
    # Print hello
    li $v0,4 ; la $a0,hello_msg ; syscall
    # Print name
    li $v0,4 ; la $a0,name_msg  ; syscall
    # Print label + integer
    li $v0,4 ; la $a0,num_msg   ; syscall
   
    li $v0,4 ; la $a0,nl ; syscall
    li $v0,10 ; syscall
