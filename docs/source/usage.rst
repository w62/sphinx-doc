
Usage
=====

.. _installation:

Installation
------------

To use Lumache, first instalmakel it using pip:

.. code-block:: console
      
   (.venv) $ pip install lumache

...

Please share other installing methods, if available. 

Creating recipes
----------------

To retrieve a list of random ingredients,
you can use the ``lumache.get_random_ingredients()`` function:

.. autofunction:: lumache.get_random_ingredients

The ``kind`` parameter should be either ``"meat"``, ``"fish"``,
or ``"veggies"``. Otherwise, :py:func:`lumache.get_random_ingredients`
will raise an exception.

.. py:exception:: lumache.InvalidKindError

   Raised if the kind is invalid.


.. cpp:type:: std::vector<int> CustomList

   A typedef-like declaration of a type.

.. c:function:: void chello(void)

   :returns: void

.. c:function:: PyObject *PyType_GenericAlloc(PyTypeObject *type, Py_ssize_t nitems)

   :param type: description of the first parameter.
   :param nitems: description of the second parameter.
   :returns: a result.
   :retval NULL: under some conditions.
   :retval NULL: under some other conditions as well.

>>> import lumache
>>> lumache.get_random_ingredients()
['shells', 'gorgonzola', 'parsley']

#


::

   +----+  +----+  +-----+  +----+  +----+  +----+  +-----+
   |bgpd|  |ripd|  |ospfd|  |ldpd|  |pbrd|  |pimd|  |.....|
   +----+  +----+  +-----+  +----+  +----+  +----+  +-----+
        |       |        |       |       |       |        |
   +----v-------v--------v-------v-------v-------v--------v
   |                                                      |
   |                         Zebra                        |
   |                                                      |
   +------------------------------------------------------+
          |                    |                   |
          |                    |                   |
   +------v------+   +---------v--------+   +------v------+
   |             |   |                  |   |             |
   | *NIX Kernel |   | Remote dataplane |   | ........... |
   |             |   |                  |   |             |
   +-------------+   +------------------+   +-------------+


.. mermaid::

   sequenceDiagram
      participant Alice
      participant Bob
      Alice->John: Hello John, how are you?
      loop Healthcheck
          John->John: Fight against hypochondria
      end
      Note right of John: Rational thoughts <br/>prevail...
      John-->Alice: Great!
      John->Bob: How about you?
      Bob-->John: Jolly good!

Admonitions
-----------

.. Attention:: Directives at large.

.. Caution:: Don't take any wooden nickels.

.. DANGER:: Mad scientist at work!

.. Error:: Does not compute.

.. Hint:: It's bigger than a bread box.

.. Important::
   - Wash behind your ears.
   - Clean up your room.

     - Including the closet.
     - The bathroom too.

       - Take the trash out of the bathroom.
       - Clean the sink.
   - Call your mother.
   - Back up your data.

.. Note:: This is a note.
   Equations within a note:
   :math:`G_{\mu\nu} = 8 \pi G (T_{\mu\nu}  + \rho_\Lambda g_{\mu\nu})`.

.. Tip:: 15% if the service is good.

    +---------+
    | Example |
    +=========+
    | Thing1  |
    +---------+
    | Thing2  |
    +---------+
    | Thing3  |
    +---------+

.. WARNING:: Strong prose may provoke extreme mental exertion.
   Reader discretion is strongly advised.

.. admonition:: And, by the way...

   You can make up your own admonition too.

Math
====

This is a test. Here is an equation:
:math:`X_{0:5} = (X_0, X_1, X_2, X_3, X_4)`.
Here is another:

.. math::
    :label: This is a label

    \nabla^2 f =
    \frac{1}{r^2} \frac{\partial}{\partial r}
    \left( r^2 \frac{\partial f}{\partial r} \right) +
    \frac{1}{r^2 \sin \theta} \frac{\partial f}{\partial \theta}
    \left( \sin \theta \, \frac{\partial f}{\partial \theta} \right) +
    \frac{1}{r^2 \sin^2\theta} \frac{\partial^2 f}{\partial \phi^2}

You can add a link to equations like the one above :eq:`This is a label` by using ``:eq:``.


