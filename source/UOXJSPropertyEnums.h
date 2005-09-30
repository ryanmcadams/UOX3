#ifndef __UOXJSPropertyEnums__
#define __UOXJSPropertyEnums__

namespace UOX
{

const uint8 JSPROP_ENUMANDPERM	= JSPROP_ENUMERATE | JSPROP_PERMANENT;
const uint8 JSPROP_ENUMPERMRO	= JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_READONLY;
const uint8 JSPROP_ENUMPERMIDX	= JSPROP_ENUMERATE | JSPROP_PERMANENT | JSPROP_INDEX;

enum CSpell_Properties
{
	CSP_ID = 0,
	CSP_ACTION,
	CSP_DELAY,
	CSP_HEALTH,
	CSP_STAMINA,
	CSP_MANA,
	CSP_MANTRA,
	CSP_STRTOSAY,
	CSP_SCROLLLOW,
	CSP_SCROLLHIGH,
	CSP_CIRCLE,
	CSP_LOWSKILL,
	CSP_HIGHSKILL,
	CSP_GINSENG,
	CSP_MOSS,
	CSP_DRAKE,
	CSP_PEARL,
	CSP_SILK,
	CSP_ASH,
	CSP_SHADE,
	CSP_GARLIC,
	CSP_REQUIRETARGET,
	CSP_REQUIREITEM,
	CSP_REQUIRELOCATION,
	CSP_REQUIRECHAR,
	CSP_TRAVELSPELL,
	CSP_FIELDSPELL,
	CSP_REFLECTABLE,
	CSP_AGRESSIVESPELL,
	CSP_RESISTABLE,
	CSP_SOUNDEFFECT,
	CSP_ENABLED,
	CSP_COUNT
};

enum CRace_Properties
{
	CRP_ID = 0,
	CRP_NAME,
	CRP_WEAKTOWEATHER,
	CRP_REQUIRESBEARD,
	CRP_REQUIRESNOBEARD,
	CRP_ISPLAYERRACE,
	CRP_GENDERRESTRICT,
	CRP_ARMOURCLASS,
	CRP_LANGUAGESKILLMIN,
	CRP_SKILLADJUSTMENT,
	CRP_POISONRESISTANCE,
	CRP_MAGICRESISTANCE,
	CRP_VISIBLEDISTANCE,
	CRP_NIGHTVISION,
	CRP_COUNT
};

enum CRegion_Properties
{
	CREGP_NAME = 0,
	CREGP_MAYOR,
	CREGP_RACE,
	CREGP_TAX,
	CREGP_TAXRESOURCE,
	CREGP_CANMARK,
	CREGP_CANRECALL,
	CREGP_CANGATE,
	CREGP_ISGUARDED,
	CREGP_CANCASTAGGRESSIVE,
	CREGP_HEALTH,
	CREGP_ISDUNGEON,
	CREGP_CHANCEBIGORE,
	CREGP_CHANCECOLOURORE,
	CREGP_NUMOREPREFERENCES,
	CREGP_OREPREFERENCES,
	CREGP_POPULATION,
	CREGP_MEMBERS,
	CREGP_COUNT
};

enum CGuild_Properties
{
	CGP_NAME = 0,
	CGP_TYPE,
	CGP_MASTER,
	CGP_STONE,
	CGP_NUMMEMBERS,
	CGP_NUMRECRUITS,
	CGP_MEMBERS,
	CGP_RECRUITS,
	CGP_CHARTER,
	CGP_ABBREVIATION,
	CGP_WEBPAGE,
	CGP_COUNT
};

enum CC_Properties
{
	CCP_NAME = 0, 
	CCP_TITLE, 
	CCP_X,
	CCP_Y,
	CCP_Z,
	CCP_ID,
	CCP_COLOUR,
	CCP_OWNER,
	CCP_VISIBLE,
	CCP_SERIAL,
	CCP_HEALTH,
	CCP_SCRIPTTRIGGER,
	CCP_PRIVATEWORD,
	CCP_WORLDNUMBER,
	CCP_TARGET,
	CCP_DEXTERITY,
	CCP_INTELLIGENCE,
	CCP_STRENGTH,
	CCP_SKILLS,
	CCP_MANA,
	CCP_STAMINA,
	CCP_CHARPACK,
	CCP_FAME,
	CCP_KARMA,
	CCP_DEFENSE,
	CCP_ATTACK,
	CCP_HUNGER,
	CCP_FROZEN,
	CCP_COMMANDLEVEL,
	CCP_RACE,
	CCP_CRIMINAL,
	CCP_MURDERER,
	CCP_INNOCENT,
	CCP_MURDERCOUNT,
	CCP_GENDER,
	CCP_DEAD,
	CCP_NPC,
	CCP_ONLINE,
	CCP_DIRECTION,
	CCP_REGION,
	CCP_TOWN,
	CCP_GUILD,
	CCP_SKILLUSE,
	CCP_BASESKILLS,
	CCP_SOCKET,
	CCP_ISITEM,
	CCP_ISCHAR,
	CCP_RACEID,
	CCP_MAXHP,
	CCP_MAXMANA,
	CCP_MAXSTAMINA,
	CCP_WANDERTYPE,
	CCP_ISONHORSE,
	CCP_TDEXTERITY,
	CCP_TINTELLIGENCE,
	CCP_TSTRENGTH,
	CCP_POISON,
	CCP_LIGHTLEVEL,
	CCP_ARMOUR,
	CCP_VULNERABLE,
	CCP_HUNGERSTATUS,
	CCP_LODAMAGE,
	CCP_HIDAMAGE,
	CCP_FLAG,
	CCP_ATWAR,
	CCP_SPELLCAST,
	CCP_ISCASTING,

	CCP_TOWNPRIV,
	CCP_GUILDTITLE,
	CCP_FONTTYPE,
	CCP_SAYCOLOUR,
	CCP_EMOTECOLOUR,
	CCP_ATTACKER,
	CCP_RACEGATE,
	CCP_SKILLLOCK,
	CCP_DEATHS,
	CCP_NEXTACT,
	CCP_PETCOUNT,
	CCP_OWNEDITEMSCOUNT,
	CCP_CELL,
	CCP_ALLMOVE,
	CCP_HOUSEICONS,
	CCP_ISSPAWNER,
	CCP_SPATTACK,
	CCP_SPDELAY,
	CCP_AITYPE,
	CCP_SPLIT,
	CCP_SPLITCHANCE,
	CCP_TRAINER,
	CCP_WEIGHT,
	CCP_SQUELCH,
	CCP_ISJAILED,
	CCP_MAGICREFLECT,
	CCP_TAMED,
	CCP_USINGPOTION,
	CCP_STEALTH,
	CCP_SKILLTOTAME,

	CCP_ISPOLYMORPHED,
	CCP_ISINCOGNITO,
	CCP_CANRUN,
	CCP_ISMEDITATING,
	CCP_ISGM,
	CCP_CANBROADCAST,
	CCP_SINGCLICKSER,
	CCP_NOSKILLTITLES,
	CCP_ISGMPAGEABLE,
	CCP_CANSNOOP,
	CCP_ISCOUNSELOR,
	CCP_NONEEDMANA,
	CCP_ISDISPELLABLE,
	CCP_NONEEDREAGS,

	CCP_NEUTRAL,

	CCP_COUNT
};

enum CI_Properties
{
	CIP_NAME = 0,
	CIP_TITLE,
	CIP_X,
	CIP_Y,
	CIP_Z,
	CIP_ID,
	CIP_COLOUR,
	CIP_OWNER,
	CIP_VISIBLE,
	CIP_SERIAL,
	CIP_HEALTH,
	CIP_SCRIPTTRIGGER,
	CIP_PRIVATEWORD,
	CIP_WORLDNUMBER,
	CIP_AMOUNT,
	CIP_CONTAINER,
	CIP_TYPE,
	CIP_MORE,
	CIP_MOREX,
	CIP_MOREY,
	CIP_MOREZ,
	CIP_MOVABLE,
	CIP_ATT,
	CIP_DEF,
	CIP_LAYER,
	CIP_ITEMSINSIDE,
	CIP_DECAYABLE,
	CIP_DECAYTIME,
	CIP_LODAMAGE,
	CIP_HIDAMAGE,
	CIP_NAME2,
	CIP_ISITEM,
	CIP_ISCHAR,
	CIP_RACEID,
	CIP_RACE,
	CIP_MAXHP,
	CIP_RANK,
	CIP_POISON,
	CIP_DIR,
	CIP_ISSPAWNER,
	CIP_WIPABLE,
	CIP_BUYVALUE,
	CIP_SELLVALUE,
	CIP_RESTOCK,
	CIP_DEVINELOCK,
	CIP_WEIGHT,
	CIP_STRENGTH,
	CIP_CORPSE,
	CIP_DESC,
	CIP_TEMPTIMER,
	// The following entries are specifically for CSpawnItem objects
	CIP_SPAWNSECTION,
	CIP_SECTIONALIST,
	CIP_MININTERVAL,
	CIP_MAXINTERVAL,

	CIP_ISNEWBIE,
	CIP_ISDISPELLABLE,
	CIP_MADEWITH,
	CIP_ENTRYMADEFROM,
	CIP_ISPILEABLE,
	CIP_ISDYEABLE,
	CIP_ISWIPEABLE,
	CIP_ISGUARDED,
	CIP_ISDOOROPEN,
	CIP_ISFIELDSPELL,
	CIP_ISLOCKEDDOWN,
	CIP_ISSHIELDTYPE,
	CIP_ISMETALTYPE,
	CIP_ISLEATHERTYPE,
	CIP_CANBELOCKEDDOWN,
	CIP_ISCONTTYPE,
	CIP_CARVESECTION,

	CIP_COUNT
};

enum CAccount_Properties
{

};

enum CSocket_Properties
{
	CSOCKP_ACCOUNT = 0,
	CSOCKP_CURRENTCHAR,
	CSOCKP_IDLETIMEOUT,
	CSOCKP_WASIDLEWARNED,
	CSOCKP_TEMPINT,
	CSOCKP_BUFFER,
	CSOCKP_XTEXT,
	CSOCKP_CLICKZ,
	CSOCKP_ADDID,
	CSOCKP_NEWCLIENT,
	CSOCKP_FIRSTPACKET,
	CSOCKP_CRYPTCLIENT,
	CSOCKP_CLIENTIP,
	CSOCKP_WALKSEQUENCE,
	CSOCKP_CURRENTSPELLTYPE,
	CSOCKP_LOGGING,
	CSOCKP_BYTESSENT,
	CSOCKP_BYTESRECEIVED,
	CSOCKP_TARGETOK,
	CSOCKP_CLICKX,
	CSOCKP_CLICKY,
	CSOCKP_PICKUPX,
	CSOCKP_PICKUPY,
	CSOCKP_PICKUPZ,
	CSOCKP_PICKUPSPOT,
	CSOCKP_PICKUPSERIAL,
	CSOCKP_LANGUAGE,
	CSOCKP_CLIENTMAJORVER,
	CSOCKP_CLIENTMINORVER,
	CSOCKP_CLIENTSUBVER,
	CSOCKP_CLIENTLETTERVER,
	CSOCKP_CLIENTTYPE,
	CSOCKP_TARGET,
	CSOCKP_TEMPOBJ,
	CSOCKP_COUNT,
};

enum CGumpData_Properties
{
	CGumpData_ID = 0 ,
	CGumpData_Button
};

enum CFile_Properties
{
	CFILE_EOF = 0,
	CFILE_POS,
	CFILE_LENGTH,
	CFILE_COUNT
};

enum CAccountProperties
{
	CACCOUNT_USERNAME = 0,
	CACCOUNT_PASSWORD,
	CACCOUNT_FLAGS,
	CACCOUNT_PATH,
	CACCOUNT_COMMENT,
	CACCOUNT_CHARACTER1,
	CACCOUNT_CHARACTER2,
	CACCOUNT_CHARACTER3,
	CACCOUNT_CHARACTER4,
	CACCOUNT_CHARACTER5,
	CACCOUNT_CHARACTER6
};

enum CConsoleProperties
{
	CCONSOLE_LEFT = 0,
	CCONSOLE_TOP,
	CCONSOLE_HEIGHT,
	CCONSOLE_WIDTH,
	CCONSOLE_FILTER,
	CCONSOLE_MODE,
	CCONSOLE_LEVEL,
	CCONSOLE_LOGECHO,
	CCONSOLE_COUNT
};

enum CScriptSectionProperties
{
	CSS_NUMTAGS = 0,
	CSS_ATEND,
	CSS_ATENDTAGS,
	CSS_COUNT
};

enum CResourceProperties
{
	CRESP_LOGAMT = 0,
	CRESP_LOGTIME,
	CRESP_OREAMT,
	CRESP_ORETIME,
	CRESP_COUNT
};

}

#endif
