#pragma message("Processing UI includes")
//system files
#include "resource.h"
//ax controls
#include "rtabs.h"
#include "rstatic.h"
#include "Rradio.h"
#include "rspltbar.h"
#include "rspinbut.h"
#include "rscrlbar.h"
#include "rlistbox.h"
#include "redit.h"
#include "redtbt.h"
#include "rbutton.h"
#include "rlistbox.h"
#include "RCOMBO.H"

//DeadCode JIM 10Mar99 #include "rsheets.h"	 

#define	F_BATTLE
#include "files.G"
#include "RComboX.h"
#include "bfnumber.h"
#include "missman2.h"
#include "node.h"
#include "savegame.h"

#include "rdialog.h"
#include "Rtoolbar.h"
#include "maintbar.h"
#include "Scalebar.h"
#include "TitleBar.h"
#include "maintbar.h"
#include "MapFltrs.h"
#include "fullpane.h"
#include "migview.h"

#include "AC_view.h"
#include "Apilot.h"
#include "Army.h"
#include "ArmyDetl.h"
#include "Armyrqst.h"
#include "Army_dos.h"
#include "Author.h"
#include "Bases.h"
#include "BasesT.h"
#include "BattDetl.h"
#include "CampBack.h"
#include "Camplist.h"
#include "campwar.h"
#include "Career.h"
#include "Choke.h"
#include "ChSquad.h"
#include "Cmbtview.h"
#include "Comit_e.h"
#include "CommsAc.h"
#include "CommsPnt.h"
#include "CurrEmbl.h"
#include "Damage.h"
#include "DbrfTlbr.h"
#include "DeBrief.h"
#include "Directs1.h"
#include "Directs2.h"
#include "DIS.h"
#include "DosBut.h"
#include "Dossier.h"
#include "filing.h"
#include "Flt_Task.h"
#include "font.h"
#include "Footage.h"
#include "Frag.h"
#include "FragPilt.h"
#include "General.h"
#include "Grndview.h"
#include "Hintbox.h"
#include "LISTBX.H"
#include "Load.h"
#include "LoadProf.h"
#include "Locker.h"
#include "LstMsnLg.h"
#include "mainfrm.h"
#include "messages.h"
#include "Misntext.h"
#include "Misn_log.h"
#include "Missfldr.h"
#include "MResult.h"
#include "MsnDeBrf.h"
#include "MTChild.h"
#include "nose_art.h"
#include "Notes.h"
#include "Overview.h"
#include "Paint.h"
#include "personal.h"
#include "picture.h"
#include "Pilots.h"
#include "Plyr_log.h"
#include "Profile.h"
#include "Prof_lib.h"
#include "Radio.h"
#include "RCstmBtn.h"
#include "RDEmptyD.h"
#include "RDEmptyP.h"
#include "Ready.h"
#include "RIP_List.h"
#include "RMdlDlg.h"
#include "Route.h"
#include "RowTasks.h"
#include "Rtestsh1.h"
#include "SaveProf.h"
#include "SaveRep.h"
#include "Scalebar.h"
#include "Scamp.h"
#include "SControl.h"
#include "Sdetail.h"
#include "Selects.h"
#include "service.h"
#include "session.h"
#include "sflight.h"
#include "Sgame.h"
#include "Sgrdclms.h"
#include "SmkDlg.h"
#include "SqdnLB.h"
#include "SqdnLBut.h"
#include "Sqdnlist.h"
#include "Squads.h"
#include "Squick1.h"
#include "Squick2.h"
#include "sQuickP.h"
#include "Squickun.h"
#include "SQView.h"
#include "Ssound.h"
#include "Supply.h"
#include "Sviewer.h"
#include "Task.h"
#include "TaskTabs.h"
#include "UserInst.h"
#include "Variants.h"
#include "Visitors.h"
#include "VwQList.h"
#include "WaveIns.h"
#include "WaveTabs.h"
#include "Weapons.h"
#include "Weather.h"
#include "WPBut.h"
#include "WPDetail.h"
#include "WPGround.h"
#include "WPShare.h"
#include "RCOMBO.H"
#include "redit.h"
#include "rstatic.h"
#include "rlistbox.h"
#include "rcombo.h"
#include "rlistbox.h"
#include "rcombo.h"
