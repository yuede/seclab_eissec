/* Declarations for interface to insn recognizer and insn-output.c.
   Copyright (C) 1987, 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004,
   2005, 2006, 2007, 2008, 2009 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* Random number that should be large enough for all purposes.  */
#define MAX_RECOG_ALTERNATIVES 30
#include "symTypes.h"

/* Types of operands.  */
enum op_type {
  OP_IN,
  OP_OUT,
  OP_INOUT
};

struct operand_alternative
{
  /* Pointer to the beginning of the constraint string for this alternative,
     for easier access by alternative number.  */
  const char *constraint;

  /* The register class valid for this alternative (possibly NO_REGS).  */
  enum reg_class cl;

  /* "Badness" of this alternative, computed from number of '?' and '!'
     characters in the constraint string.  */
  unsigned int reject;

  /* -1 if no matching constraint was found, or an operand number.  */
  int matches;
  /* The same information, but reversed: -1 if this operand is not
     matched by any other, or the operand number of the operand that
     matches this one.  */
  int matched;

  /* Nonzero if '&' was found in the constraint string.  */
  unsigned int earlyclobber:1;
  /* Nonzero if TARGET_MEM_CONSTRAINT was found in the constraint
     string.  */
  unsigned int memory_ok:1;
  /* Nonzero if 'o' was found in the constraint string.  */
  unsigned int offmem_ok:1;
  /* Nonzero if 'V' was found in the constraint string.  */
  unsigned int nonoffmem_ok:1;
  /* Nonzero if '<' was found in the constraint string.  */
  unsigned int decmem_ok:1;
  /* Nonzero if '>' was found in the constraint string.  */
  unsigned int incmem_ok:1;
  /* Nonzero if 'p' was found in the constraint string.  */
  unsigned int is_address:1;
  /* Nonzero if 'X' was found in the constraint string, or if the constraint
     string for this alternative was empty.  */
  unsigned int anything_ok:1;
};

int recog_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_3 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_4 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_5 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_6 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_7 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_8 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_9 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_10 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_11 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_12 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_13 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_14 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_15 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_16 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_17 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_18 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_19 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_20 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_21 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_22 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_23 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_24 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_25 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_26 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_27 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_28 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_29 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_30 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_31 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_32 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_33 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_34 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_35 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_36 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_37 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_38 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_39 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_40 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_41 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_42 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_43 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_44 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_45 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_46 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_47 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);
int recog_48 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, int*
    pnum_clobbers ATTRIBUTE_UNUSED);

extern void init_recog (void);
extern void init_recog_no_volatile (void);
extern int check_asm_operands (rtx);
extern int asm_operand_ok (rtx, const char *, const char **);
extern bool validate_change (rtx, rtx *, rtx, bool);
extern bool validate_unshare_change (rtx, rtx *, rtx, bool);
extern bool canonicalize_change_group (rtx insn, rtx x);
extern int insn_invalid_p (rtx);
extern int verify_changes (int);
extern void confirm_change_group (void);
extern int apply_change_group (void);
extern int num_validated_changes (void);
extern void cancel_changes (int);
extern int constrain_operands (int);
extern int constrain_operands_cached (int);
extern int  memory_address_addr_space_p (enum machine_mode , rtx, addr_space_t);
#define memory_address_p(mode,addr) \
	memory_address_addr_space_p ((mode), (addr), ADDR_SPACE_GENERIC)
extern int strict_memory_address_addr_space_p (enum machine_mode, rtx,
					       addr_space_t);
#define strict_memory_address_p(mode,addr) \
	strict_memory_address_addr_space_p ((mode), (addr), ADDR_SPACE_GENERIC)
extern int validate_replace_rtx_subexp (rtx, rtx, rtx, rtx *);
extern int validate_replace_rtx (rtx, rtx, rtx);
extern int validate_replace_rtx_part (rtx, rtx, rtx *, rtx);
extern int validate_replace_rtx_part_nosimplify (rtx, rtx, rtx *, rtx);
extern void validate_replace_rtx_group (rtx, rtx, rtx);
extern void validate_replace_src_group (rtx, rtx, rtx);
extern bool validate_simplify_insn (rtx insn);
extern int num_changes_pending (void);
#ifdef HAVE_cc0
extern int next_insn_tests_no_inequality (rtx);
#endif
extern int reg_fits_class_p (rtx, enum reg_class, int, enum machine_mode);

extern int offsettable_memref_p (rtx);
extern int offsettable_nonstrict_memref_p (rtx);
extern int offsettable_address_addr_space_p (int, enum machine_mode, rtx,
					     addr_space_t);
#define offsettable_address_p(strict,mode,addr) \
	offsettable_address_addr_space_p ((strict), (mode), (addr), \
					  ADDR_SPACE_GENERIC)
extern int mode_dependent_address_p (rtx);

extern int recog (rtx , rtx , int *);
#ifndef GENERATOR_FILE
static inline int recog_memoized (rtx insn);
#endif
extern void add_clobbers (rtx, int);
extern int added_clobbers_hard_reg_p (int);
extern void insn_extract (rtx);
extern void extract_insn (rtx);
extern void extract_constrain_insn_cached (rtx);
extern void extract_insn_cached (rtx);
extern void preprocess_constraints (void);
extern rtx peep2_next_insn (int);
extern int peep2_regno_dead_p (int, int);
extern int peep2_reg_dead_p (int, rtx);
#ifdef CLEAR_HARD_REG_SET
extern rtx peep2_find_free_register (int, int, const char *,
				     enum machine_mode, HARD_REG_SET *);
#endif
extern rtx peephole2_insns (rtx, rtx, int *);

extern int store_data_bypass_p (rtx, rtx);
extern int if_test_bypass_p (rtx, rtx);

#ifndef GENERATOR_FILE
/* Try recognizing the instruction INSN,
   and return the code number that results.
   Remember the code so that repeated calls do not
   need to spend the time for actual rerecognition.

   This function is the normal interface to instruction recognition.
   The automatically-generated function `recog' is normally called
   through this one.  */

/* Fix added by Niranjan */
#if 0
extern int* nir_clobbers;

static void insert_nir_clobbers(int insn_code_number, rtx insn, int num_clobbers_to_add)
{
	int i = 0;
	rtx pat = NULL_RTX, newpat = NULL_RTX;

	printf("\n -------- ");
	print_rtl_single(stdout, insn);
	printf("\n No of clobbers = %d", num_clobbers_to_add);
	printf("\n -------- ");

	pat = PATTERN(insn);

  newpat = gen_rtx_PARALLEL (VOIDmode,
  						rtvec_alloc (GET_CODE (pat) == PARALLEL
						  ? (XVECLEN (pat, 0)
						     + num_clobbers_to_add)
						  : num_clobbers_to_add + 1));

  if (GET_CODE (pat) == PARALLEL) {
		for (i = 0; i < XVECLEN (pat, 0); i++)
	  	XVECEXP (newpat, 0, i) = XVECEXP (pat, 0, i);
	} else
		XVECEXP (newpat, 0, 0) = pat;

  add_clobbers (newpat, insn_code_number);
	PATTERN(insn) = newpat;
}


static inline int
recog_memoized (rtx insn)
{
  if (INSN_CODE (insn) < 0) {
    INSN_CODE (insn) = recog (PATTERN (insn), insn, nir_clobbers);
		if(nir_clobbers != NULL && *nir_clobbers != 0) {
			insert_nir_clobbers(INSN_CODE(insn), insn, *nir_clobbers);
			*nir_clobbers = 0;
		}
	}
  return INSN_CODE (insn);
}

#endif

static inline int
recog_memoized (rtx insn)
{
		//if (INSN_CODE (insn) < 0)
		//		INSN_CODE (insn) = recog (PATTERN (insn), insn, 0);
		return INSN_CODE (insn);
}

#endif

/* Skip chars until the next ',' or the end of the string.  This is
   useful to skip alternatives in a constraint string.  */
static inline const char *
skip_alternative (const char *p)
{
  const char *r = p;
  while (*r != '\0' && *r != ',')
    r++;
  if (*r == ',')
    r++;
  return r;
}

/* Nonzero means volatile operands are recognized.  */
extern int volatile_ok;

/* Set by constrain_operands to the number of the alternative that
   matched.  */
extern int which_alternative;

/* The following vectors hold the results from insn_extract.  */

struct recog_data
{
  /* It is very tempting to make the 5 operand related arrays into a
     structure and index on that.  However, to be source compatible
     with all of the existing md file insn constraints and output
     templates, we need `operand' as a flat array.  Without that
     member, making an array for the rest seems pointless.  */

  /* Gives value of operand N.  */
  rtx operand[MAX_RECOG_OPERANDS] ATTRIBUTE_SYMBOLIC;

  /* Gives location where operand N was found.  */
  rtx *operand_loc[MAX_RECOG_OPERANDS];

  /* Gives the constraint string for operand N.  */
  const char *constraints[MAX_RECOG_OPERANDS];

  /* Gives the mode of operand N.  */
  enum machine_mode operand_mode[MAX_RECOG_OPERANDS];

  /* Gives the type (in, out, inout) for operand N.  */
  enum op_type operand_type[MAX_RECOG_OPERANDS];

  /* Gives location where the Nth duplicate-appearance of an operand
     was found.  This is something that matched MATCH_DUP.  */
  rtx *dup_loc[MAX_DUP_OPERANDS];

  /* Gives the operand number that was duplicated in the Nth
     duplicate-appearance of an operand.  */
  char dup_num[MAX_DUP_OPERANDS];

  /* ??? Note that these are `char' instead of `unsigned char' to (try to)
     avoid certain lossage from K&R C, wherein `unsigned char' default
     promotes to `unsigned int' instead of `int' as in ISO C.  As of 1999,
     the most common places to bootstrap from K&R C are SunOS and HPUX,
     both of which have signed characters by default.  The only other
     supported natives that have both K&R C and unsigned characters are
     ROMP and Irix 3, and neither have been seen for a while, but do
     continue to consider unsignedness when performing arithmetic inside
     a comparison.  */

  /* The number of operands of the insn.  */
  char n_operands;

  /* The number of MATCH_DUPs in the insn.  */
  char n_dups;

  /* The number of alternatives in the constraints for the insn.  */
  char n_alternatives;

  /* Specifies whether an insn alternative is enabled using the
     `enabled' attribute in the insn pattern definition.  For back
     ends not using the `enabled' attribute the array fields are
     always set to `true' in expand_insn.  */
  bool alternative_enabled_p [MAX_RECOG_ALTERNATIVES];

  /* In case we are caching, hold insn data was generated for.  */
  rtx insn;
};

extern struct recog_data recog_data ATTRIBUTE_SYMBOLIC;

/* Contains a vector of operand_alternative structures for every operand.
   Set up by preprocess_constraints.  */
extern struct operand_alternative recog_op_alt[MAX_RECOG_OPERANDS][MAX_RECOG_ALTERNATIVES];

/* A table defined in insn-output.c that give information about
   each insn-code value.  */

typedef int (*insn_operand_predicate_fn) (rtx, enum machine_mode);
typedef const char * (*insn_output_fn) (rtx *, rtx);
typedef rtx (*insn_gen_fn) (rtx, ...);

struct insn_operand_data
{
  const insn_operand_predicate_fn predicate;

  const char *const constraint;

  ENUM_BITFIELD(machine_mode) const mode : 16;

  const char strict_low;

  const char eliminable;
};

/* Legal values for insn_data.output_format.  Indicate what type of data
   is stored in insn_data.output.  */
#define INSN_OUTPUT_FORMAT_NONE		0	/* abort */
#define INSN_OUTPUT_FORMAT_SINGLE	1	/* const char * */
#define INSN_OUTPUT_FORMAT_MULTI	2	/* const char * const * */
#define INSN_OUTPUT_FORMAT_FUNCTION	3	/* const char * (*)(...) */

struct insn_data
{
  const char *const name;
#if HAVE_DESIGNATED_INITIALIZERS
  union {
    const char *single;
    const char *const *multi;
    insn_output_fn function;
  } output;
#else
  struct {
    const char *single;
    const char *const *multi;
    insn_output_fn function;
  } output;
#endif
  const insn_gen_fn genfun;
  const struct insn_operand_data *const operand;

  const char n_operands;
  const char n_dups;
  const char n_alternatives;
  const char output_format;
};

extern const struct insn_data insn_data[];
extern const struct insn_data insn_data1[];
extern int peep2_current_count;
