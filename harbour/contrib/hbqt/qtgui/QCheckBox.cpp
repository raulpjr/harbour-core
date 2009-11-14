/*
 * $Id$
 */

/* -------------------------------------------------------------------- */
/* WARNING: Automatically generated source file. DO NOT EDIT!           */
/*          Instead, edit corresponding .qth file,                      */
/*          or the generator tool itself, and run regenarate.           */
/* -------------------------------------------------------------------- */

/*
 * Harbour Project source code:
 * QT wrapper main header
 *
 * Copyright 2009 Pritpal Bedi <pritpal@vouchcac.com>
 *
 * Copyright 2009 Marcos Antonio Gambeta <marcosgambeta at gmail dot com>
 * www - http://www.harbour-project.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */
/*----------------------------------------------------------------------*/

#include "hbapi.h"
#include "../hbqt.h"

/*----------------------------------------------------------------------*/
#if QT_VERSION >= 0x040500
/*----------------------------------------------------------------------*/

#include <QtCore/QPointer>

#include <QtGui/QCheckBox>


/*
 * QCheckBox ( QWidget * parent = 0 )
 * QCheckBox ( const QString & text, QWidget * parent = 0 )
 */

typedef struct
{
  void * ph;
  QT_G_FUNC_PTR func;
  QPointer< QCheckBox > pq;
} QGC_POINTER_QCheckBox;

QT_G_FUNC( release_QCheckBox )
{
   QGC_POINTER_QCheckBox * p = ( QGC_POINTER_QCheckBox * ) Cargo;

   HB_TRACE( HB_TR_DEBUG, ( "release_QCheckBox                    p=%p", p));
   HB_TRACE( HB_TR_DEBUG, ( "release_QCheckBox                   ph=%p pq=%p", p->ph, (void *)(p->pq)));

   if( p && p->ph && p->pq )
   {
      const QMetaObject * m = ( ( QObject * ) p->ph )->metaObject();
      if( ( QString ) m->className() != ( QString ) "QObject" )
      {
         ( ( QCheckBox * ) p->ph )->~QCheckBox();
         p->ph = NULL;
         HB_TRACE( HB_TR_DEBUG, ( "release_QCheckBox                   Object deleted!" ) );
         #if defined(__debug__)
            just_debug( "  YES release_QCheckBox                   %i B %i KB", ( int ) hb_xquery( 1001 ), hb_getMemUsed() );
         #endif
      }
      else
      {
         HB_TRACE( HB_TR_DEBUG, ( "release_QCheckBox                   Object Name Missing!" ) );
         #if defined(__debug__)
            just_debug( "  NO  release_QCheckBox" );
         #endif
      }
   }
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "release_QCheckBox                   Object Allready deleted!" ) );
      #if defined(__debug__)
         just_debug( "  DEL release_QCheckBox" );
      #endif
   }
}

void * gcAllocate_QCheckBox( void * pObj )
{
   QGC_POINTER_QCheckBox * p = ( QGC_POINTER_QCheckBox * ) hb_gcAllocate( sizeof( QGC_POINTER_QCheckBox ), gcFuncs() );

   p->ph = pObj;
   p->func = release_QCheckBox;
   new( & p->pq ) QPointer< QCheckBox >( ( QCheckBox * ) pObj );
   #if defined(__debug__)
      just_debug( "          new_QCheckBox                   %i B %i KB", ( int ) hb_xquery( 1001 ), hb_getMemUsed() );
   #endif
   return( p );
}

HB_FUNC( QT_QCHECKBOX )
{
   void * pObj = NULL;

   if( hb_pcount() >= 1 && HB_ISCHAR( 1 ) )
   {
      pObj = ( QCheckBox* ) new QCheckBox( hbqt_par_QString( 1 ), hbqt_par_QWidget( 2 ) ) ;
   }
   else
   {
      pObj = ( QCheckBox* ) new QCheckBox( hbqt_par_QWidget( 1 ) ) ;
   }

   hb_retptrGC( gcAllocate_QCheckBox( pObj ) );
}
/*
 * Qt::CheckState checkState () const
 */
HB_FUNC( QT_QCHECKBOX_CHECKSTATE )
{
   hb_retni( ( Qt::CheckState ) hbqt_par_QCheckBox( 1 )->checkState() );
}

/*
 * bool isTristate () const
 */
HB_FUNC( QT_QCHECKBOX_ISTRISTATE )
{
   hb_retl( hbqt_par_QCheckBox( 1 )->isTristate() );
}

/*
 * void setCheckState ( Qt::CheckState state )
 */
HB_FUNC( QT_QCHECKBOX_SETCHECKSTATE )
{
   hbqt_par_QCheckBox( 1 )->setCheckState( ( Qt::CheckState ) hb_parni( 2 ) );
}

/*
 * void setTristate ( bool y = true )
 */
HB_FUNC( QT_QCHECKBOX_SETTRISTATE )
{
   hbqt_par_QCheckBox( 1 )->setTristate( hb_parl( 2 ) );
}


/*----------------------------------------------------------------------*/
#endif             /* #if QT_VERSION >= 0x040500 */
/*----------------------------------------------------------------------*/
