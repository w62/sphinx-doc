
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

.. py:function:: lumache.get_random_ingredients(kind=None)

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


